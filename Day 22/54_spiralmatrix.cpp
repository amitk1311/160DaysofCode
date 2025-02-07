// 54. Spiral Matrix
// Solved
// Medium
// Topics
// Companies
// Hint
// Given an m x n matrix, return all elements of the matrix in spiral order.

 

// Example 1:


// Input: matrix = [[1,2,3],[4,5,6],[7,8,9]]
// Output: [1,2,3,6,9,8,7,4,5]
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        vector<int> v;
        int minr = 0, minc = 0, maxr = m - 1, maxc = n - 1;
        while (minr <= maxr && minc <= maxc) {
            for (int j = minc; j <= maxc; j++)
                v.push_back(matrix[minr][j]);
            minr++;
            if (minr>maxr || minc>maxc) break;

            for (int i = minr; i <= maxr; i++)
                v.push_back(matrix[i][maxc]);
            maxc--;
            if (minr>maxr || minc>maxc) break;

            for (int j = maxc; j >= minc; j--)
                v.push_back(matrix[maxr][j]);
            maxr--;
            if (minr> maxr || minc>maxc) break;

            for (int i = maxr; i >= minr; i--)
                v.push_back(matrix[i][minc]);
            minc++;
        }
        return v;
    }
};
