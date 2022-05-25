// https://leetcode.com/problems/how-many-numbers-are-smaller-than-the-current-number
class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        std::vector<std::pair<int, int>> result;
        for (int i = 0; i < nums.size(); ++i) {
            result.push_back({i, nums[i]});
        }
        std::sort(result.begin(), result.end(), [](const auto& left, const auto& right) {
            return left.second < right.second;
        });
        std::vector<int> answer(nums.size());
        for (int i = 0; i < nums.size(); ++i) {
            if (i > 0 && result[i].second == result[i - 1].second) {
                answer[result[i].first] = answer[result[i - 1].first];
                continue;
            }
            answer[result[i].first] = i;
        }
        return answer;
    }
};