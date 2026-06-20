class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {

        int product=1;
        int n=nums.size();
        int left=0;
        int count=0;

        if(k<=1) return 0;
        
        for(int right=0;right<n;right++){

            product=product*nums[right];
    
            while(product>=k){
                product=product/nums[left];
                left++;
                
               
            }
            count=count+(right-left+1);
        }
        return count;
    }
};