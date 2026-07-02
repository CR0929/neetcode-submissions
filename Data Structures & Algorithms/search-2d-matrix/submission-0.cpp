class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        vector<int>res;

        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                res.push_back(matrix[i][j]);
            }
        }

        for(int i=0;i<res.size();i++){
            if(target == res[i]){
                return true;
            }
        }
        return false;
    }
};
