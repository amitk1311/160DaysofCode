// 448. Find All Numbers Disappeared in an Array
// Solved
// Easy
// Topics
// Companies
// Hint
// Given an array nums of n integers where nums[i] is in the range [1, n], return an array of all the integers in the range [1, n] that do not appear in nums.

 

// Example 1:

// Input: nums = [4,3,2,7,8,2,3,1]
// Output: [5,6]
// Example 2:

// Input: nums = [1,1]
// Output: [2]
 

// Constraints:

// n == nums.length
// 1 <= n <= 105
// 1 <= nums[i] <= n
class Solution {
    public:
        vector<int> findDisappearedNumbers(vector<int>& nums) {
            vector<int>ans;
            for(int i=0;i<nums.size();i++){
                nums[abs(nums[i])-1]=-abs(nums[abs(nums[i])-1]);
            }
            
            for(int j=0;j<nums.size();j++){
                if(nums[j]>0){
                    ans.push_back(j+1);
                }
            }
            return ans;
        }
    };
 