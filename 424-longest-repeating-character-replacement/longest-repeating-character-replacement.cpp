class Solution {
public:
    int characterReplacement(string s, int k) {
        int n = s.size();
        int maxFreq = 0;
        int left=0;
        int   maxLen= 0;
        unordered_map<int,int> mpp;

        for(int right=0; right<n; right++){
            mpp[s[right]]++;
            maxFreq=max(maxFreq, mpp[s[right]]);

            if((right-left+1)-maxFreq>k){
                mpp[s[left]]--;
                left++; 
            }
            maxLen=max((right-left+1), maxLen);
        }


        return maxLen;
    }
};