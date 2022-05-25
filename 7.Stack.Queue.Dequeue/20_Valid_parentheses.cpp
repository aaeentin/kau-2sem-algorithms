// https://leetcode.com/problems/valid-parentheses
class Solution {
public:
    bool isValid(string s) {
        std::vector<char> stack;
        for (char c : s) {
            if (c == '}') {
                if (stack.empty() || stack.back() != '{') {
                    return false;
                } 
                stack.pop_back();
            } else if (c == ')') {
                if (stack.empty() || stack.back() != '(') {
                    return false;
                } 
                stack.pop_back();
            } else if (c == ']') {
                if (stack.empty() || stack.back() != '[') {
                    return false;
                } 
                stack.pop_back();
            } else {
                stack.push_back(c);
            }
        }
        return stack.empty();
    }
};