// https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string-ii
class Solution {
public:
    string removeDuplicates(string s, int k) {
        std::vector<std::pair<char, int>> stack;
        for (char c : s) {
            if (stack.empty()) {
                stack.push_back({c, 1});
            }
            else {
                if (stack.back().first == c) {
                    ++stack.back().second;
                    if (stack.back().second == k) {
                        stack.pop_back();
                    }
                } else {
                    stack.push_back({c, 1});
                }
            }
        }
        std::string result;
        for (auto& pair : stack) {
            while (pair.second--) {
                result.push_back(pair.first);
            }
        }
        return result;
    }
};