class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        
        int n=nums.size();
         vector<int> prefixsum(n,0);
        prefixsum[0]=nums[0];

        for(int i=1;i<n;i++){
            prefixsum[i]=prefixsum[i-1]+nums[i];
        }

        unordered_map<int,int> mp;
        mp[0]=-1;

        for(int i=0;i<n;i++){
            int rem= prefixsum[i]%k;

            if(mp.find(rem)!=mp.end()){
                if(i-mp[rem]>=2) return true;
            }
            else mp[rem]=i;
        }
        return false;
    }
};