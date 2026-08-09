class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        int n=numRows;
        ans.push_back({1});

        for(int i=1;i<n;i++){

            
            vector<int> currentRow(i+1,1);

            for(int j=1;j<i;j++){
                currentRow[j]=ans[i-1][j-1]+ans[i-1][j];
            }
            ans.push_back(currentRow);
        }
        return ans;
    }
};