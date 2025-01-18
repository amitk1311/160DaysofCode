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
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        if (nums.size() == 1){
            return false;
        }
        for(int i=0;i<nums.size()-1;i++){
            if (nums[i]==nums[i+1]){
                return true;
            }        
        }

    return false;
    }    

};