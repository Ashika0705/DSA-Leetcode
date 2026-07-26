class Solution {
public:
    string removeOuterParentheses(string s) {

        int n=s.length();
        int count=0;
        string ans="";

        for(char ch:s){
            
            if (ch =='('){
                if(count>0) ans=ans+ch;
                count++;
                
            }
            
            if(ch==')'){
                count--;
                if(count>0) ans=ans+ch;
                
            }
            

        }
        return ans;
    }
};