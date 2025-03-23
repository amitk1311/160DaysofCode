// 3375. Minimum Operations to Make Array Values Equal to K
// Solved
// Easy
// Topics
// Companies
// Hint
// You are given an integer array nums and an integer k.

// An integer h is called valid if all values in the array that are strictly greater than h are identical.

// For example, if nums = [10, 8, 10, 8], a valid integer is h = 9 because all nums[i] > 9 are equal to 10, but 5 is not a valid integer.

// You are allowed to perform the following operation on nums:

// Select an integer h that is valid for the current values in nums.
// For each index i where nums[i] > h, set nums[i] to h.
// Return the minimum number of operations required to make every element in nums equal to k. If it is impossible to make all elements equal to k, return -1.

 

// Example 1:

// Input: nums = [5,2,5,4,5], k = 2

// Output: 2

// Explanation:

// The operations can be performed in order using valid integers 4 and then 2.

// Example 2:
class Solution {
    public int minOperations(int[] nums, int k) {
        int n = nums.length;
        int count = 0;
        
        for (int i = 0; i < n; i++) {
            if(nums[i]<k){
                return -1;
            }
            if (nums[i] > k) {
                boolean found = false;
                for (int j = 0; j < i; j++) {
                    if (nums[i] == nums[j]) {
                        found = true;
                        break;
                    }
                }
                if (!found) {
                    count++;
                }
            }
        }
        
        return count;
    }
}