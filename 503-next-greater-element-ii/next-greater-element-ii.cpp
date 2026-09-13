class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        
        int n=nums.size();
        vector<int>ans(n,-1);
        stack<int>st;

        for(int j=2*n-1;j>=0;j--){

        int i=j%n;

          while(!st.empty() && nums[i]>=st.top()) {
            st.pop();}

          if(!st.empty() && nums[i]<st.top()){
            if(j<n) ans[i]=st.top();
          }
          st.push(nums[i]);
        }
        return ans;
    }
};