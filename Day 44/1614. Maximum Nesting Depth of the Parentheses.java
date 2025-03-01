// 1614. Maximum Nesting Depth of the Parentheses
// Solved
// Easy
// Topics
// Companies
// Hint
// Given a valid parentheses string s, return the nesting depth of s. The nesting depth is the maximum number of nested parentheses.

 

// Example 1:

// Input: s = "(1+(2*3)+((8)/4))+1"

// Output: 3

// Explanation:

// Digit 8 is inside of 3 nested parentheses in the string.

// Example 2:
class Solution {
    public int maxDepth(String s) {
        int max = 0;
        int current = 0;
        
        for (int i = 0; i < s.length(); i++) {
            char c = s.charAt(i);
            if (c == '(') {
                current++;
                if (current > max) {
                    max = current;
                }
            } else if (c == ')') {
                current--;
            }
        }
        
        return max;
    }
}