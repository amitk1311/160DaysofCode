// 136. Single Number
// Solved
// Easy
// Topics
// Companies
// Hint
// Given a non-empty array of integers nums, every element appears twice
// except for one. Find that single one
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;i+=2){
            if(nums[i] !=nums[i+1]){
                return nums[i];
            }
        }
        return nums[nums.size()-1];       
    }
};