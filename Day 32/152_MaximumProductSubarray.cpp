// 152. Maximum Product Subarray
// Solved
// Medium
// Topics
// Companies
// Given an integer array nums, find a 
// subarray
//  that has the largest product, and return the product.

// The test cases are generated so that the answer will fit in a 32-bit integer.

 

// Example 1:

// Input: nums = [2,3,-2,4]
// Output: 6
// Explanation: [2,3] has the largest product 6.
// Example 2:

// Input: nums = [-2,0,-1]
// Output: 0
// Explanation: The result cannot be 2, because [-2,-1] is not a subarray.
class Solution {
    public:
        int maxProduct(vector<int>& nums) {
             int maxi = nums[0];
            int mini = nums[0];
            int ans = nums[0];
            for(int i = 1;i < nums.size();i++){
                if(nums[i] < 0){
                    swap(maxi,mini);
                }
                maxi = max(nums[i],maxi*nums[i]);
                mini = min(nums[i],mini*nums[i]);
                ans = max(ans,maxi);
            }
            return ans;
        }
    };
 