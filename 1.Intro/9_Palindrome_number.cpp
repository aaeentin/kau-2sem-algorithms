// https://leetcode.com/problems/palindrome-number
class Solution {
public:
    bool isPalindrome(int x) {
        auto stringed = std::to_string(x);
        for (size_t i = 0; i < stringed.size() / 2; ++i) {
            if (stringed[i] != stringed[stringed.length() - i - 1]) {
                return false;
            }
        }
        return true;
    }
};