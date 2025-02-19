// 74. Search a 2D Matrix
// Solved
// Medium
// Topics
// Companies
// You are given an m x n integer matrix matrix with the following two properties:

// Each row is sorted in non-decreasing order.
// The first integer of each row is greater than the last integer of the previous row.
// Given an integer target, return true if target is in matrix or false otherwise.

// You must write a solution in O(log(m * n)) time complexity.

class Solution {
    public:
        bool searchMatrix(vector<vector<int>>& matrix, int target) {
            int row = matrix.size();
            int col = matrix[0].size();
            int start = 0;
            int end = row*col-1;
    
            while (start <= end) {
                int mid = start + (end - start) / 2;
                int mid_v = matrix[mid / col][mid % col];
    
                if (mid_v == target)
                    return true;
    
                if (mid_v < target) {
                    start = mid + 1;
                } else {
                    end = mid - 1;
                }
            }
            return false;
        }
    };
    