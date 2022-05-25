// https://leetcode.com/problems/longest-continuous-increasing-subsequence
class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int current = 1;
        int best = 1;
        for (size_t i = 1; i < nums.size(); ++i) {
            if (nums[i] > nums[i - 1]) {
                ++current;
            } else {
                best = std::max(best, current); 
                current = 1;
            }
        }
        return std::max(best, current);
    }
};