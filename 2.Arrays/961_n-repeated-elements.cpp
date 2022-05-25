// https://leetcode.com/problems/n-repeated-element-in-size-2n-array
class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        for (int i = 0; i < nums.size(); ++i) {
            for (int j = i + 1; j <= i + 3 && j < nums.size(); ++j) {
                if (nums[i] == nums[j]) {
                    return nums[i];
                }
            }
        }
        throw 1;
    }
};