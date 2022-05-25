// https://leetcode.com/problems/powx-n
class Solution {
public:
    double myPow(double x, int n) {
        if (n == 0) {
            return 1.0;
        }
        if (n == 1) {
            return x;
        } 
        if (n == -1) {
            return 1 / x;
        }
        if (n % 2 == 0) { 
            auto res = myPow(x, n / 2);
            return res * res;
        } else {
            return n > 0 ? x * myPow(x, n - 1) : 1.0 / x * myPow(x, n + 1);
        }
    }
};