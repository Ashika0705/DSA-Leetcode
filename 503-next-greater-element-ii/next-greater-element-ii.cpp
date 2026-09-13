class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        
        int n=nums.size();
        vector<int>ans;
        stack<int>st;

        for(int j=2*n-1;j>=0;j--){
            int i=j%n;
            int greater=-1;

            while(!st.empty() && st.top()<=nums[i]){
                st.pop();
            }
            


            if(!st.empty() && st.top()>nums[i]){
                greater=st.top();
                
            }
            // if(st.empty()){
            //     st.push(nums[i]);
                
            // }
            st.push(nums[i]);
        if(j<n){
           ans.push_back(greater);
            
        }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};