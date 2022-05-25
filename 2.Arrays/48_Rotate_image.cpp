// https://leetcode.com/problems/rotate-image/
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        for (size_t i = 0; i < n; ++i) {
            for (size_t j = i; j < n - 1 - i; ++j) {
                std::swap(matrix[i][j], matrix[j][n - 1 - i]);
                std::swap(matrix[i][j], matrix[n - 1 - i][n - 1 - j]);
                std::swap(matrix[i][j], matrix[n - 1 - j][i]);
            }
        }
    }
};