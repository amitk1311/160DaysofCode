// 15. 3Sum
// Solved
// Medium
// Topics
// Companies
// Hint
// Given an integer array nums, return all the triplets [nums[i], nums[j], nums[k]] such that i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == 0.

// Notice that the solution set must not contain duplicate triplets.

 

// Example 1:

// Input: nums = [-1,0,1,2,-1,-4]
// Output: [[-1,-1,2],[-1,0,1]]
// Explanation: 
// nums[0] + nums[1] + nums[2] = (-1) + 0 + 1 = 0.
// nums[1] + nums[2] + nums[4] = 0 + 1 + (-1) = 0.
// nums[0] + nums[3] + nums[4] = (-1) + 2 + (-1) = 0.
// The distinct triplets are [-1,0,1] and [-1,-1,2].
// Notice that the order of the output and the order of the triplets does not matter.
// Example 2:
class Solution {
    public List<List<Integer>> threeSum(int[] nums) {
        if (nums.length < 3){
            return new ArrayList<List<Integer>>();
        }
        Arrays.sort(nums);
        List<List<Integer>> sum = new ArrayList<List<Integer>>();
        
        int i = 0, j = 0, k = nums.length - 1;
        for (i = 0; i <= nums.length - 3; i++) {
            if (i != 0 && nums[i] == nums[i - 1])
                continue;
            j = i + 1;
            k = nums.length - 1;
            while (j < k) {
                if (nums[i] + nums[j] + nums[k] > 0) {
                    k--;
                } else if (nums[i] + nums[j] + nums[k] < 0) {
                    j++;
                } else {
                    sum.add(Arrays.asList(nums[i], nums[j], nums[k]));
                    j++;
                    while (nums[j - 1] == nums[j] && j < k)
                        j++;
                }
            }
        }
        return sum;
    }
}