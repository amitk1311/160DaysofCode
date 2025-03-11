628. Maximum Product of Three Numbers
Solved
Easy
Topics
Companies
Given an integer array nums, find three numbers whose product is maximum and return the maximum product.

 

Example 1:

Input: nums = [1,2,3]
Output: 6
Example 2:
class Solution {
    public int maximumProduct(int[] nums) {
        int n = nums.length;
        int product = 1;
        Arrays.sort(nums);
        for(int i= n -3;i<n;i++){
            product*=nums[i];
        }
        return Math.max(product,nums[0]*nums[1]*nums[n-1]);
    }
}