class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {

        int n=nums.size();
        int count=0;

        // BRUTE FORCE
        //for(int i=0;i<n;i++){
        //     int sum=0;
        //     for(int j=i;j<n;j++){
        //         sum=sum+nums[j];
        //         if(sum==k){
        //             count++;
                    
        //         }
        //     }
        // }
        // return count;

        vector<int>prefixsum(n,0);
        prefixsum[0]=nums[0];

        for(int i=1;i<n;i++){
            prefixsum[i]=prefixsum[i-1]+nums[i];
        }

        for(int j=0;j<n;j++){
            if(prefixsum[j]==k) count++;
        }

        unordered_map<int,int> mp;

        for(int i=0;i<n;i++){
            int val=prefixsum[i]-k;

            if(mp.find(val)!=mp.end()){
                count=count+mp[val];
            }
            mp[prefixsum[i]]++;
        }


    return count;

    }
};