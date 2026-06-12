class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
       
        int left=0;
        
        int right=n-1;
        vector<int> ans;
        int sum;

            while(left<right){
                 sum = nums[left]+nums[right];

                if(sum==target){
                    ans.push_back(left+1);
                    ans.push_back(right+1);
                    break;
                }
                else if(sum<target) left++;

                else{ 
                    right--;
                }
            }
    return ans;
    }
};