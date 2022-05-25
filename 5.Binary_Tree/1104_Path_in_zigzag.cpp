// https://leetcode.com/problems/path-in-zigzag-labelled-binary-tree
class Solution {
public:
    vector<int> pathInZigZagTree(int label) {
        std::vector<int> result;
        Solve(label, &result);
        return result;
    }
private:
    void Solve(int label, std::vector<int>* result) {
        if (label == 1) {
            result->push_back(label);
            return;
        }
        std::cout << label << std::endl;
        auto lower_pow = static_cast<int>(std::log2(label / 2));
        auto lower = static_cast<int>(std::pow(2, lower_pow));
        auto upper_pow = static_cast<int>(std::log2(label));
        auto upper = static_cast<int>(std::pow(2, upper_pow));
        auto arg = upper + lower - label / 2 - 1;
        Solve(arg, result);

        result->push_back(label);
    }
};