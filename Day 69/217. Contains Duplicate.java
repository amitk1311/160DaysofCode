// 217. Contains Duplicate
// Solved
// Easy
// Topics
// Companies
// Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.

 

// Example 1:

// Input: nums = [1,2,3,1]

// Output: true

// Explanation:

// The element 1 occurs at the indices 0 and 3.

// Example 2:

// Input: nums = [1,2,3,4]

// Output: false

// Explanation:

// All elements are distinct.

// Example 3:

class Solution {
    public boolean containsDuplicate(int[] nums) {
        if(nums==null||nums.length<2){
            return false;
        }
        Arrays.sort(nums);
        
        for(int i=1;i<nums.length;i++){
            
                if(nums[i]==nums[i-1]){
                    return true;
             
            }
        }
        return false;
    }
}