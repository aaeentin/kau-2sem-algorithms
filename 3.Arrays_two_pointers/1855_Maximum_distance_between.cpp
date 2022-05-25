// https://leetcode.com/problems/maximum-distance-between-a-pair-of-values
class Solution {
public:
    int maxDistance(vector<int>& nums1, vector<int>& nums2) {
        int i = 0;
        int j = 0;
        int ans = 0;
        while (i < nums1.size()) {
            while (j < nums2.size() && nums1[i] <= nums2[j]) {
                ans = std::max(j - i, ans);
                ++j;
            }
            if (j == nums2.size()) {
                break;
            }
            while (i < nums1.size() && i < j && nums1[i] > nums2[j]) {
                ++i;
            }
            while (i < nums1.size() && j < nums2.size() && i == j && nums1[i] > nums2[j]) {
                ++i;
                ++j;
            }
        }
        return ans;
    }
};