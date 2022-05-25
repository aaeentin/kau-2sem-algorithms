// https://leetcode.com/problems/move-zeroes
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        size_t to_emplace = 0;
        for (size_t i = 0; i < nums.size(); ++i) {
            if (nums[i] != 0) {
                std::swap(nums[i], nums[to_emplace]);
                ++to_emplace;
            }
        }
    }
};