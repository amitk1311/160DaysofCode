// 3300. Minimum Element After Replacement With Digit Sum
// Solved
// Easy
// Topics
// Companies
// Hint
// You are given an integer array nums.

// You replace each element in nums with the sum of its digits.

// Return the minimum element in nums after all replacements.

 

// Example 1:

// Input: nums = [10,12,13,14]

// Output: 1

// Explanation:

// nums becomes [1, 3, 4, 5] after all replacements, with minimum element 1.

// Example 2:

// Input: nums = [1,2,3,4]

// Output: 1
class Solution {
    public int minElement(int[] nums) {
        int [] ans = new int[nums.length];
        for(int i=0;i<nums.length;i++){
              if(nums[i]>=10){
            while(nums[i]>0){
                
                ans[i] +=nums[i]%10;
                nums[i]/=10;
            }
            }
            else{
                ans[i]=nums[i];
            }
            
        }
        Arrays.sort(ans);
        return ans[0];
    }
}