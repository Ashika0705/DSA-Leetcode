class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        bool isFound=false;
        int m=matrix.size();

        for(auto it:matrix){
            int n=it.size();
            if(target>=it[0] && target<=it[n-1]){
                for(int i=0; i<n;i++){
                    if(it[i]==target) isFound=true;
                }
            }
        }
        return isFound;
    }
};