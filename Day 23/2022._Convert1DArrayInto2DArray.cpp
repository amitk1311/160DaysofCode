// You are given a 0-indexed 1-dimensional (1D) integer array original, and two integers, m and n. You are tasked with creating a 2-dimensional (2D) array with  m rows and n columns using all the elements from original.

// The elements from indices 0 to n - 1 (inclusive) of original should form the first row of the constructed 2D array, the elements from indices n to 2 * n - 1 (inclusive) should form the second row of the constructed 2D array, and so on.

// Return an m x n 2D array constructed according to the above procedure, or an empty 2D array if it is impossible.
class Solution {
    public:
        vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
         if(original.size()!=m*n) return {};
           
           vector<vector<int>> ans;
           int k=0;
           
            while(k<original.size()){
                for(int i=0; i<m; i++){
            vector<int> temp;
              for(int j=k; j<k+n; j++){
              temp.push_back(original[j]);
             }
            k+=n;
            ans.push_back(temp);  
            }
            } 
           return ans;
        }
    };