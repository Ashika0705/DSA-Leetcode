class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {

        int n=nums.size();
        int left=0;
        long long sum=0;
        long long  maxsum=0;
        unordered_map<int,int> freq;

       
        //first sliding window condition;
        for(int right=0; right<n ; right++){ 
            freq[nums[right]]++;
            sum=sum+nums[right];

            if(right-left+1>k){
                freq[nums[left]]--;
               
                if(freq[nums[left]]==0){
                    freq.erase(nums[left]);
                    
                }
                sum=sum-nums[left];
                left++;
            }

            if(right-left+1== k &&  freq.size()==k)
            {
                maxsum=max(maxsum,sum);
            }
        }
  
        return maxsum;

    }
};