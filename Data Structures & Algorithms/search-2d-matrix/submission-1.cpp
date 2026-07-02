class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix[0].size();
        int n = matrix.size();

        int left =0, right = m*n-1;

        while(left<=right){
            int mid = left + (right-left)/2;

            int m1 = mid/m;
            int n1 = mid%m;

            if(matrix[m1][n1] == target){
                return true;
            } else if(matrix[m1][n1] > target){
                right = mid-1;
            } else {
                left = mid+1;
            }
        }
        return false;
    }
};
