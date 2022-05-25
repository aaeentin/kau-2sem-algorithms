// https://leetcode.com/problems/reverse-integer
class Solution {
public:
    int reverse(int x) {
        int result = 0;
        while (x) {
            int digit = x % 10;
            if (result == INT_MAX / 10 && digit >= 7 || result > INT_MAX / 10) {
                return 0;
            }
            if (result == INT_MIN / 10 && digit <= -8 || result < INT_MIN / 10)  {
                return 0;
            }
            result = result * 10 + digit;
            x /= 10;
        }
        return result;
    }
};