class Solution {
public:

    int solve(vector<int>&nums, int start, int end){
        int n=nums.size();
       
        vector<int>dp(n);
        
        dp[start]=nums[start];
        
        if(start+1<=end){
            dp[start+1]=max(nums[start],nums[start+1]);
        }
        

        for(int i=start+2;i<=end;i++){
            dp[i]=max(dp[i-1], nums[i]+dp[i-2]);
        }
        return dp[end];

        
    }
    int rob(vector<int>& nums) {
        int n=nums.size();
        int ans;
          if (n == 1)
            return nums[0];

        ans=max(solve(nums,0,n-2), solve(nums,1,n-1));

        return ans;

    
    }
};