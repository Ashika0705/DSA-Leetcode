class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {

        int n=nums.size();

        long long currsum=0;

        for(int i=0;i<k;i++){
             currsum= currsum+nums[i];    
        }

        long long maxsum = currsum;
        
        for(int i=k;i<n;i++){
            currsum= currsum-nums[i-k]+nums[i];
            maxsum=max(currsum,maxsum);
        }

    double avg= (double)maxsum / k;
    return avg;
    }
};