class Solution {
public:
    int maxSubArray(vector<int>& arr) {
        int n = arr.size();

        int currSum=arr[0];
        int maxSum=arr[0];

        for(int i=1; i<n;i++){
            currSum=max(arr[i], arr[i]+currSum);
            maxSum= max(currSum, maxSum);
        }
        return maxSum;
    }
};