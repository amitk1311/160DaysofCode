// 485. Max Consecutive Ones
// Easy
// Topics
// Companies
// Hint
// Given a binary array nums, return the maximum number of consecutive 1's in the array.
// Example 1:
// Input: nums = [1,1,0,1,1,1]
// Output: 3
// Explanation: The first two digits or the last three digits are consecutive 1s. The maximum number of consecutive 1s is 3.
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0;
        int maxi=INT_MIN;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                count++;
                
            }
            else{
               count=0; 
            }
             maxi = max(count,maxi);
        }
        return maxi;      
    }
};