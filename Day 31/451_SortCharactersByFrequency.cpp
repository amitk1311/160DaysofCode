// 451. Sort Characters By Frequency
// Solved
// Medium
// Topics
// Companies
// Given a string s, sort it in decreasing order based on the frequency of the characters. The frequency of a character is the number of times it appears in the string.

// Return the sorted string. If there are multiple answers, return any of them.

 

// Example 1:

// Input: s = "tree"
// Output: "eert"
// Explanation: 'e' appears twice while 'r' and 't' both appear once.
// So 'e' must appear before both 'r' and 't'. Therefore "eetr" is also a valid answer.
// Example 2:

class Solution {
    public:
        string frequencySort(string s) {
            vector<int> freq(128, 0);
            for (auto ch : s) freq[ch]++;
            
            sort(s.begin(), s.end(), [&](char a, char b) {
                return cmp(a, b, freq);
            });
            
            return s;
        }
        
        bool cmp(char a, char b, vector<int>& freq) {
            if (freq[a] == freq[b]) return a < b;
            return freq[a] > freq[b];
        }
    };
    