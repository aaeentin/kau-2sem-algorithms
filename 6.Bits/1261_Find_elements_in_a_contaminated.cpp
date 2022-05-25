// https://leetcode.com/problems/find-elements-in-a-contaminated-binary-tree
class FindElements {
public:
    FindElements(TreeNode* root) {
        Traverse(root, 0);
    }
    
    bool find(int target) {
        return cash_.find(target) != cash_.end();
    }
private:
    std::unordered_set<int> cash_;
    void Traverse(TreeNode* node, int current) {
        if (node == nullptr) {
            return;
        }
        cash_.insert(current);
        Traverse(node->left, current * 2 + 1);
        Traverse(node->right, current * 2 + 2);
    }
};

/**
 * Your FindElements object will be instantiated and called as such:
 * FindElements* obj = new FindElements(root);
 * bool param_1 = obj->find(target);
 */