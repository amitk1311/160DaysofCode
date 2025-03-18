// 3467. Transform Array by Parity
// Solved
// Easy
// Topics
// Companies
// Hint
// You are given an integer array nums. Transform nums by performing the following operations in the exact order specified:

// Replace each even number with 0.
// Replace each odd numbers with 1.
// Sort the modified array in non-decreasing order.
// Return the resulting array after performing these operations.

 

// Example 1:

// Input: nums = [4,3,2,1]

// Output: [0,0,1,1]

// Explanation:
class Solution {
    public int[] transformArray(int[] nums) {
        for(int i=0;i<nums.length;i++){
            if(nums[i]%2 != 0){
                nums[i]=1;
            }
            else{
                nums[i]=0;
            }
        }
        Arrays.sort(nums);
        return nums;
    }
}