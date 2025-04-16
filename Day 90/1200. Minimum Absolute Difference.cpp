// 1200. Minimum Absolute Difference
// Solved
// Easy
// Topics
// Companies
// Hint
// Given an array of distinct integers arr, find all pairs of elements with the minimum absolute difference of any two elements.

// Return a list of pairs in ascending order(with respect to pairs), each pair [a, b] follows

// a, b are from arr
// a < b
// b - a equals to the minimum absolute difference of any two elements in arr
 

// Example 1:

// Input: arr = [4,2,1,3]
// Output: [[1,2],[2,3],[3,4]]
// Explanation: The minimum absolute difference is 1. List all pairs with difference equal to 1 in ascending order.
class Solution {
    public:
        vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
            sort(arr.begin(),arr.end());
            vector<vector<int>>ans;
            int min_diff = INT_MAX;
            for(int i=1;i<arr.size();i++){
                min_diff = min(arr[i]-arr[i-1],min_diff);
                
            }
            for(int i=1;i<arr.size();i++){
                if(min_diff == arr[i]-arr[i-1]){
                    ans.push_back({arr[i-1], arr[i]});
                }
            }
            return ans;
            
        }
    };