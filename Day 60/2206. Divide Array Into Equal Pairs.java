// 2206. Divide Array Into Equal Pairs
// Solved
// Easy
// Topics
// Companies
// Hint
// You are given an integer array nums consisting of 2 * n integers.

// You need to divide nums into n pairs such that:

// Each element belongs to exactly one pair.
// The elements present in a pair are equal.
// Return true if nums can be divided into n pairs, otherwise return false.

 

// Example 1:

// Input: nums = [3,2,3,2,2,2]
// Output: true
// Explanation: 
// There are 6 elements in nums, so they should be divided into 6 / 2 = 3 pairs.
// If nums is divided into the pairs (2, 2), (3, 3), and (2, 2), it will satisfy all the conditions.
// Example 2:
class Solution {
    public boolean divideArray(int[] nums) {
        int n=nums.length;
        int[] arr=new int[501];
        for(int i=0; i<n; i++){
            arr[nums[i]]++;
        }
        for(int i=0; i<501; i++){
            if(arr[i]==0) continue;
            else if(arr[i]%2==1) return false;
        }

        return true;
    }
}