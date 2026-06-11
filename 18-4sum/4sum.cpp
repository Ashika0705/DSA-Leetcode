class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {

        // Store all valid quadruplets
        vector<vector<int>> ans;

        int n = nums.size();

        // Sort the array for two-pointer technique
        sort(nums.begin(), nums.end());

        // Choose the first element
        for (int i = 0; i < n - 3; i++) {

            // Skip duplicate first elements
            if (i > 0 && nums[i] == nums[i - 1]) {
                continue;
            }

            // Choose the second element
            for (int j = i + 1; j < n - 2; j++) {

                // Skip duplicate second elements
                if (j > i + 1 && nums[j] == nums[j - 1]) {
                    continue;
                }

                // Two pointers for the remaining two numbers
                int left = j + 1;
                int right = n - 1;

                while (left < right) {

                    // Use long long to avoid integer overflow
                    long long sum =
                        (long long)nums[i] +
                        nums[j] +
                        nums[left] +
                        nums[right];

                    // Found a valid quadruplet
                    if (sum == target) {

                        ans.push_back({
                            nums[i],
                            nums[j],
                            nums[left],
                            nums[right]
                        });

                        // Move both pointers
                        left++;
                        right--;

                        // Skip duplicate third elements
                        while (left < right &&
                               nums[left] == nums[left - 1]) {
                            left++;
                        }

                        // Skip duplicate fourth elements
                        while (left < right &&
                               nums[right] == nums[right + 1]) {
                            right--;
                        }
                    }

                    // Need a bigger sum
                    else if (sum < target) {
                        left++;
                    }

                    // Need a smaller sum
                    else {
                        right--;
                    }
                }
            }
        }

        return ans;
    }
};