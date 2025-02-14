// Write a function to find the longest common prefix string amongst an array of strings.

// If there is no common prefix, return an empty string "".

 

// Example 1:

// Input: strs = ["flower","flow","flight"]
// Output: "fl"
// Example 2:

// Input: strs = ["dog","racecar","car"]
// Output: ""
// Explanation: There is no common prefix among the input strings.
class Solution {
    public:
        string longestCommonPrefix(vector<string>& strs) {
            string ans = "";
            for (int i=0;i<strs[0].length();i++){
                for(int j =0;j<strs.size()-1;j++){
                    if(strs[j][i] != strs[j+1][i]) return ans;
                }
                ans+= strs[0][i];
            }
            return ans;   
        }
    };
 