class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        unordered_map<int,int> mpp;
        int longestS=0;
        int left=0;

        for(int right=0;right<n;right++){
            mpp[s[right]]++;

            while(mpp[s[right]]>1){
                mpp[s[left]]--;
                left++;
            }
            longestS=max(longestS,right-left+1);
        }
        return longestS;
    }
};