class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        int prod;

        int maxp=INT_MIN;

        for(int i=0;i<n;i++){
            prod=nums[i];
             maxp=max(maxp,prod);
            for(int j=i+1;j<n;j++){
                prod=prod*nums[j];
                 maxp=max(maxp,prod);
            }
           
        }
        return maxp;
    }
};