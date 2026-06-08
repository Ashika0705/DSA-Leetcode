class Solution {
public:
    bool isPalindrome(string s) {
        vector<int> res1;
        int n=s.size();
        for(int i=0;i<n;i++){
            s[i]=tolower(s[i]);

        }
        for(int i=0;i<n;i++){
            if((int(s[i])>=97 && int(s[i])<=122) || (s[i]>='0' &s[i]<='9')){
                res1.push_back(s[i]);
            }
        }
        int m= res1.size();
        int left=0;
        int right=m-1;
        bool palindrome=true;
        while(left<right){
            if(res1[left]!=res1[right]) palindrome = false;
            left++;
            right--;
        }
    return palindrome;

    }
};