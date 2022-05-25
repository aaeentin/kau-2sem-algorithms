// https://leetcode.com/problems/trapping-rain-water
class Solution {
public:
    int trap(vector<int>& height) {
        int heighest = height.size();
        int ans = 0;
        for (int i = 1; i < height.size(); ++i) {
            if (height[i] - height[i - 1] < 0) {
                heighest = i - 1;
                break;
            }
        }
        for (int i = heighest + 1; i < height.size(); ++i) {
           if (height[i] >= height[heighest]) {
                 // std::cout << "heighest: " << heighest << "i: " << i << std::endl;
                for (int j = heighest + 1; j < i; ++j) {
                    ans += height[heighest] - height[j];
                }
                heighest = i;
            }
        }
        auto heighest_last = heighest;
        heighest = -1;
        for (int i = static_cast<int>(height.size()) - 2; i > heighest_last; --i) {
            if (height[i] - height[i + 1] < 0) {
                heighest = i + 1;
                break;
            }
        }
        for (int i = heighest - 1; i >= heighest_last; --i) {
           if (height[i] >= height[heighest]) {
                 // std::cout << "heighest: " << heighest << "i: " << i << std::endl;
                for (int j = heighest - 1; j > i; --j) {
                    ans += height[heighest] - height[j];
                }
                heighest = i;
            }
        }
        return ans;
    }
};