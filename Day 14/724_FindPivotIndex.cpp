// 724. Find Pivot Index
// Solved
// Easy
// Topics
// Companies
// Hint
// Given an array of integers nums, calculate the pivot index of this array.

// The pivot index is the index where the sum of all the numbers strictly to the left of the index is equal to the sum of all the numbers strictly to the index's right.

// If the index is on the left edge of the array, then the left sum is 0 because there are no elements to the left. This also applies to the right edge of the array.

// Return the leftmost pivot index. If no such index exists, return -1.
class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();

        int sum = 0;
        for(int &x : nums){
            sum += x;

        }
        int cs = 0;
        for(int i =0;i<n;i++){
            int ls = cs;
            int rs = sum - cs - nums[i];

            if(ls == rs){
                return i;

            }
            cs += nums[i];
        }
        
        return -1;
    }
};