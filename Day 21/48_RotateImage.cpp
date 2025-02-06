// 48. Rotate Image
// Solved
// Medium
// Topics
// Companies
// You are given an n x n 2D matrix representing an image, 
// rotate the image by 90 degrees (clockwise).

// You have to rotate the image in-place, which means you have to modify
//  the input 2D matrix directly. DO NOT allocate another 2D matrix and do the rotation.
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int i=1;
        int j = matrix.size();
        for(int k = 0;k < matrix.size()-1;k++){
            i = k+1;
            while(i<j){
                swap(matrix[k][i],matrix[i][k]);
                i++;
            }
        }
        for(int i=0;i<matrix.size();i++){
            reverse(matrix[i].begin(),matrix[i].end());
        }
        
    }
};