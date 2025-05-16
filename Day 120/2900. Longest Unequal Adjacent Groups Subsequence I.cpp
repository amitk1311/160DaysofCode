// 2900. Longest Unequal Adjacent Groups Subsequence I
// Solved
// Easy
// Topics
// Companies
// Hint
// You are given a string array words and a binary array groups both of length n.

// A subsequence of words is alternating if for any two consecutive strings in the sequence, their corresponding elements at the same indices in groups are different (that is, there cannot be consecutive 0 or 1).

// Your task is to select the longest alternating subsequence from words.

// Return the selected subsequence. If there are multiple answers, return any of them.

// Note: The elements in words are distinct.

 

// Example 1:

// Input: words = ["e","a","b"], groups = [0,0,1]

// Output: ["e","b"]
class Solution {
public:
    vector<string> getLongestSubsequence(vector<string>& words, vector<int>& groups) {
        
        for(int i=1;i<groups.size();i++){
            if(groups[i]==groups[i-1]){
               words.erase(words.begin() + i);
               groups.erase(groups.begin() + i);
                i--;
            }
        }
        return words;
    }
};