// Description
// Accepted
// Accepted
// Editorial
// Editorial
// Solutions
// Solutions
// Submissions
// Submissions


// Code
// Testcase
// Test Result
// Test Result
// 682. Baseball Game
// Solved
// Easy
// Topics
// Companies
// You are keeping the scores for a baseball game with strange rules. At the beginning of the game, you start with an empty record.

// You are given a list of strings operations, where operations[i] is the ith operation you must apply to the record and is one of the following:

// An integer x.
// Record a new score of x.
// '+'.
// Record a new score that is the sum of the previous two scores.
// 'D'.
// Record a new score that is the double of the previous score.
// 'C'.
// Invalidate the previous score, removing it from the record.
// Return the sum of all the scores on the record after applying all the operations.

// The test cases are generated such that the answer and all intermediate calculations fit in a 32-bit integer and that all operations are valid.
class Solution {
    public:
        int calPoints(vector<string>& operations) {
            vector<string> v;
            for(int i=0;i<operations.size();i++){
                if(operations[i]=="C"){
                    if(!v.empty()) v.pop_back();
                }
                else if(operations[i]=="D"){
                    if(!v.empty()){
                        int mult=stoi(v.back())*2;
                        v.push_back(to_string(mult));
                    }
                }
                else if(operations[i]=="+"){
                    if(v.size()>=2){
                        int sum=stoi(v[v.size()-1])+stoi(v[v.size()-2]);
                        v.push_back(to_string(sum));
                    }
                }
                else{
                    v.push_back(operations[i]);
                }
            }
            int ans=0;
            for(int i=0;i<v.size();i++){
                ans+=stoi(v[i]);
            }
            return ans;
        }
    };