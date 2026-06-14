// class Solution {
// public:
//     int findDuplicate(vector<int>& nums) {
//         int n=nums.size();
//         vector<int> freq(n+1,0);
        
//         for(int i=0;i<n;i++){
//             freq[nums[i]]++;
//         }
//         for(int i=0;i<n;i++){
//             if(freq[i]>1){
//                 return i;
//             }
//         }
//     return 0;
//     }
// };

class Solution {
public:
    int findDuplicate(vector<int>& nums) {

        int slow = nums[0];
        int fast = nums[0];

        // Step 1: Find intersection point
        do {
            slow = nums[slow];
            fast = nums[nums[fast]];
        } while (slow != fast);

        // Re=initiating: Find entrance of cycle
        slow = nums[0];

        while (slow != fast) {
            slow = nums[slow];
            fast = nums[fast];
        }

        return slow;
    }
};