class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int maxVal = 0;

for(int i = 0; i < nums.size(); i++) {
    if(nums[i] > maxVal)
        maxVal = nums[i];
}

vector<int> freq(maxVal + 1, 0);

for(int i = 0; i < nums.size(); i++) {
    freq[nums[i]]++;
    if(freq[nums[i]] > 1)
        return nums[i];
}
return 0;
    }
};