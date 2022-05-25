// https://leetcode.com/problems/binary-tree-inorder-traversal
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        std::vector<int> result;
        Traverse(root, &result);
        return result;
    }
    void Traverse(TreeNode* node, std::vector<int>* result) {
        if (node == nullptr) {
            return;
        }
        Traverse(node->left, result);
        result->push_back(node->val);
        Traverse(node->right, result);
    }
};