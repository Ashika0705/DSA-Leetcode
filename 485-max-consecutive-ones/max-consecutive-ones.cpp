class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
       int maxOne=0;
       int left=0;
        int n= nums.size();

       for(int right =0;right<n;right++) {
         
        if(nums[right]==0){
           
            left=right+1;
           
        }
         maxOne=max(maxOne,right-left+1);
      
       }
       return maxOne;
    }
};