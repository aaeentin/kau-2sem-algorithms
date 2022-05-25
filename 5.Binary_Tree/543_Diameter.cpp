// https://leetcode.com/problems/diameter-of-binary-tree
class Solution {
public:
    int diameterOfBinaryTree(TreeNode* root) {
        return Solve(root).first;
    }
private:
    std::pair<int, int> Solve(TreeNode* node) {
        if (node == nullptr) {
            return {0, -1};
        }
        auto left_res = Solve(node->left);
        auto right_res = Solve(node->right);
        auto best_ans = std::max(left_res.first, 
                                 std::max(right_res.first, right_res.second + 1 + left_res.second + 1));
        return {best_ans, std::max(left_res.second, right_res.second) + 1};
    }
};