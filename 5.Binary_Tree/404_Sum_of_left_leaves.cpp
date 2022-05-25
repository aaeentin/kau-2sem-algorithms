// https://leetcode.com/problems/sum-of-left-leaves
class Solution {
public:
    int sumOfLeftLeaves(TreeNode* root) {
        std::shared_ptr<int> result = std::make_shared<int>(0);
        Solve(root, result);
        return *result;
    }
private:
bool IsLeaf(TreeNode* node) {
    return node->left == nullptr && node->right == nullptr;
}
    
void Solve(TreeNode* node, std::shared_ptr<int> answer) {
    if (node == nullptr) {
        return;
    }
    if (node->left && IsLeaf(node->left)) {
        *answer += node->left->val;
        Solve(node->right, answer);
        return;
    } 
    Solve(node->left, answer);
    Solve(node->right, answer);
}
};