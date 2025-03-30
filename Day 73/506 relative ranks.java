// 506. Relative Ranks
// Solved
// Easy
// Topics
// Companies
// You are given an integer array score of size n, where score[i] is the score of the ith athlete in a competition. All the scores are guaranteed to be unique.

// The athletes are placed based on their scores, where the 1st place athlete has the highest score, the 2nd place athlete has the 2nd highest score, and so on. The placement of each athlete determines their rank:

// The 1st place athlete's rank is "Gold Medal".
// The 2nd place athlete's rank is "Silver Medal".
// The 3rd place athlete's rank is "Bronze Medal".
// For the 4th place to the nth place athlete, their rank is their placement number (i.e., the xth place athlete's rank is "x").
// Return an array answer of size n where answer[i] is the rank of the ith athlete.

 

// Example 1:

// Input: score = [5,4,3,2,1]
// Output: ["Gold Medal","Silver Medal","Bronze Medal","4","5"]
// Explanation: The placements are [1st, 2nd, 3rd, 4th, 5th].
// Example 2:
class Solution {
    public String[] findRelativeRanks(int[] score) {
        int max = -1, c = 1, n = score.length;
        for (int no : score) {
            if (no > max) {
                max = no;
            }
        }
        
        int[] rankArray = new int[max + 1];
        
        for (int i = 0; i < n; i++) {
            rankArray[score[i]] = i+1;
        }
        String ans[] = new String[n];
        for(int i = max ;i>=0;i--) {
            if(rankArray[i] > 0) {
                if(c == 1) ans[rankArray[i]-1] = "Gold Medal";
                else if(c == 2) ans[rankArray[i]-1] = "Silver Medal";
                else if(c == 3) ans[rankArray[i]-1] = "Bronze Medal";
                else ans[rankArray[i]-1] = "" + c;
                c++;
            }
        }
        return ans;

        
    }
}