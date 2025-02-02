// 69. Sqrt(x)

// Given a non-negative integer x, return the square root of x rounded down
// to the nearest integer. The returned integer should be non-negative as well.

// You must not use any built-in exponent function or operator.

// For example, do not use pow(x, 0.5) in c++ or x ** 0.5 in python.

// Example 1:

// Input: x = 4
// Output: 2
// Explanation: The square root of 4 is 2, so we return 2.
class Solution {
public:
    long bs(long n) {
        long s = 1;
        long e = n;
        long ans = 0;
        while (s <= e) {
            long mid = s + (e - s) / 2;
            if (mid * mid == n) {
                return mid;
            } else if (mid * mid > n) {
                e = mid - 1;
            } else {
                ans = mid;
                s = mid + 1;
            }
        }
        return ans;
    }

    int mySqrt(int x) {
        return (int)bs(x);
    }
};
