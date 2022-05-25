// https://leetcode.com/problems/sum-root-to-leaf-numbers
class Solution {
public:
    int sumNumbers(TreeNode* root) {
        std::shared_ptr<int> result = std::make_shared<int>(0);
        Solve(root, 0, result);
        return *result;
    }
private:
    void Solve(TreeNode* node, int current, std::shared_ptr<int> answer) {
        if (node == nullptr) {
            return;
        }
        if (node->left == nullptr && node->right == nullptr) {
            *answer += current * 10 + node->val;
            return;
        } 
        Solve(node->left, current * 10 + node->val, answer);
        Solve(node->right, current * 10 + node->val, answer);
    }
};