// 125. Valid Palindrome
// Solved
// Easy
// Topics
// Companies
// A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.

// Given a string s, return true if it is a palindrome, or false otherwise.

 

// Example 1:

// Input: s = "A man, a plan, a canal: Panama"
// Output: true
// Explanation: "amanaplanacanalpanama" is a palindrome.
class Solution {
    public:
        bool isPalindrome(string s) {
            string str;
            for(int i=0;i<s.size();i++){
                if(isalnum(s[i]))
                str+=tolower(s[i]);
            }
            int n=str.size()-1;
            for(int i=0;i<str.size();i++){
                if(str[i]!=str[n-i])
                return false;
            }
            return true;
        }
    };