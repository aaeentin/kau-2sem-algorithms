// https://leetcode.com/problems/range-addition-ii
class Solution {
public:
    int maxCount(int m, int n, vector<vector<int>>& ops) {
        if (ops.empty()) {
            return m * n;
        }
        auto min_row = INT_MAX;
        auto min_col = INT_MAX;
        for (auto& pair : ops) {
            min_row = std::min(min_row, pair[0]);
            min_col = std::min(min_col, pair[1]);
        }
        return min_col * min_row;
    }
};