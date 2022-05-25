// https://leetcode.com/problems/ugly-number/
class Solution {
public:
    bool isUgly(int number) {
        if (number <= 0) {
            return false;
        }
        while (number % 2 == 0) {
            number /= 2;
        }
        while (number % 3 == 0) {
            number /= 3;
        }
        while (number % 5 == 0) {
             number /= 5;
        }
        return number == 1;
    }
};