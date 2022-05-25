// https://leetcode.com/problems/delete-node-in-a-linked-list
class Solution {
public:
    void deleteNode(ListNode* node) {
        node->val = node->next->val;
        auto* next_node = node->next;
        node->next = node->next->next;
        delete next_node;
    }
};