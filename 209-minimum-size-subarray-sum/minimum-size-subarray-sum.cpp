class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n= nums.size();
        int minm=INT_MAX;
        int left=0;
        int sum=0;
        int len=0;

        for(int right=0;right<n;right++){
            sum=sum+nums[right];

            
            while(sum>target){
                len=right-left+1;
                minm=min(minm,len);
                sum=sum-nums[left];

                left++;
                
            }
            if(sum==target){
                len=right-left+1;
                minm=min(minm,len);
            }
        }
        if(minm==INT_MAX) return 0;
    return minm;  
    }
};