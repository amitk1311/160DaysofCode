// 73. Set Matrix Zeroes
// Solved
// Medium
// Topics
// Companies
// Hint
// Given an m x n integer matrix matrix, if an element is 0, set its entire row and column to 0's.

// You must do it in place.
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int rows = matrix.size();
        int cols = matrix[0].size();
        vector<pair<int, int>> zeroP;
        for(int i = 0; i < rows; i++) {
            for(int j = 0; j < cols; j++) {
                if(matrix[i][j] == 0) {
                    zeroP.push_back(pair<int, int>(i, j));
                }
            }
        }
        for(int k = 0; k < zeroP.size(); k++) {
            int row = zeroP[k].first;
            int col = zeroP[k].second;
            for(int j = 0; j < cols; j++) {
                matrix[row][j] = 0;
            }
            for(int i = 0; i < rows; i++) {
                matrix[i][col] = 0;
            }
        }
    }
};