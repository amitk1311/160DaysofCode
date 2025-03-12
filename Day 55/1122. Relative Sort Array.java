1122. Relative Sort Array
Solved
Easy
Topics
Companies
Hint
Given two arrays arr1 and arr2, the elements of arr2 are distinct, and all elements in arr2 are also in arr1.

Sort the elements of arr1 such that the relative ordering of items in arr1 are the same as in arr2. Elements that do not appear in arr2 should be placed at the end of arr1 in ascending order.

 

Example 1:

Input: arr1 = [2,3,1,3,2,4,6,7,9,2,19], arr2 = [2,1,4,3,9,6]
Output: [2,2,2,1,4,3,3,9,6,7,19]
Example 2:

Input: arr1 = [28,6,22,8,44,17], arr2 = [22,28,8,6]
Output: [22,28,8,6,17,44]
 

Constraints:
class Solution {
    public int[] relativeSortArray(int[] arr1, int[] arr2) {
        int largest = Integer.MIN_VALUE;
        for(int i=0 ; i<arr1.length ; i++) {
            largest = Math.max(largest, arr1[i]);
        }
        int count[] = new int[largest + 1];
        for(int i=0 ; i<arr1.length ; i++) {
            count[arr1[i]]++;
        }
        int temp[] = new int[arr1.length];
        int j=0;
        for(int i=0 ; i<arr2.length ; i++) {
            while(count[arr2[i]] > 0) {
                temp[j] = arr2[i];

                count[arr2[i]]--;
                j++;
            }
        }

        for(int i=0 ; i<count.length ; i++) {
            while(count[i] > 0) {
                temp[j] = i;
                count[i]--;
                j++;
            }
        }

        return temp;
    }
}