// https://leetcode.com/problems/arithmetic-slices
class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        if (nums.size() < 3) {
            return 0;
        }
        int curr_diff = nums[1] - nums[0];
        int left = 0;
        int right = 1;
        int ans = 0;
        for (size_t i = 2; i < nums.size(); ++i) {
            auto diff = nums[i] - nums[i - 1];
            if (diff == curr_diff) {
                ++right;
            } else {
                if (right - left >= 2) {
                    auto n = right - left + 1;
                    ans += n * (n - 1) / 2 - (n - 1);
                }
                curr_diff = diff;
                left = i - 1;
                right = i;
            }
        }
        if (right - left >= 2) {
            auto n = right - left + 1;
            ans += n * (n - 1) / 2 - (n - 1);
        }
        return ans;
    }
};