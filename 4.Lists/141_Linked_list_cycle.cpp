// https://leetcode.com/problems/linked-list-cycle
class Solution {
public:
    bool hasCycle(ListNode *head) {
        std::unordered_set<ListNode*> stored_node_ptrs;
        while (head && head->next) {
            if (stored_node_ptrs.find(head) != stored_node_ptrs.end()) {
                return true;
            }
            stored_node_ptrs.insert(head);
            head = head->next;
        }
        return false;
    }
};