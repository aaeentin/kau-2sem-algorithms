// https://leetcode.com/problems/minimum-value-to-get-positive-step-by-step-sum
class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int sum = 0;
        int min_value = INT_MAX;
        for (auto& value : nums) {
            sum += value;
            min_value = std::min(sum, min_value);
        }
        return min_value < 1 ? 1 - min_value : 1;
    }
};