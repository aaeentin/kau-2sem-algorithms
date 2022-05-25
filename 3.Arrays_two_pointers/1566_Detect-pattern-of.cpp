// https://leetcode.com/problems/detect-pattern-of-length-m-repeated-k-or-more-times
class Solution {
public:
    bool containsPattern(vector<int>& arr, int m, int k) {
        for (size_t start_idx = 0; start_idx + m * k - 1 < arr.size(); ++start_idx) {
            bool found = true;
            for (size_t element = start_idx; found && element < start_idx + m; ++element) {
                for (size_t j = element + m; j < element + m * k; j += m) {
                    if (arr[j] != arr[element]) {
                        found = false;
                        break;
                    }
                }
            }
            if (found) {
                return true;
            }
        }
        return false;
    }
};