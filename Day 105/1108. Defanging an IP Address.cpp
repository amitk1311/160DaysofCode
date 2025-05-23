// 1108. Defanging an IP Address
// Solved
// Easy
// Topics
// Companies
// Given a valid (IPv4) IP address, return a defanged version of that IP address.

// A defanged IP address replaces every period "." with "[.]".

 

// Example 1:

// Input: address = "1.1.1.1"
// Output: "1[.]1[.]1[.]1"
// Example 2:

// Input: address = "255.100.50.0"
// Output: "255[.]100[.]50[.]0"
 

// Constraints:

// The given address is a valid IPv4 address
class Solution {
    public:
        string defangIPaddr(string address) {
            string ans ="";
            for(int i=0;i<address.size();i++){
                if(address[i]=='.'){
                    ans.push_back('[');
                    ans.push_back('.');
                    ans.push_back(']');
                    
                }
                else{
                    ans.push_back(address[i]);
                }
            }
            return ans;
        }
    };