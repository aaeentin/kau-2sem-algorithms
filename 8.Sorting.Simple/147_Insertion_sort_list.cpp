// https://leetcode.com/problems/insertion-sort-list
class Solution {
public:
    ListNode* insertionSortList(ListNode* head) {
        ListNode* sorted_head = nullptr;
        while (head) {
            if (!sorted_head) {
                sorted_head = new ListNode(head->val, nullptr);
            } else {
                if (head->val < sorted_head->val) {
                    ListNode* node = new ListNode(head->val, nullptr);
                    node->next = sorted_head;
                    sorted_head = node;
                } else {
                    ListNode* node = new ListNode(head->val, nullptr);
                    ListNode* prev = sorted_head;
                    ListNode* current = sorted_head;
                    while (current && current->val < node->val) {
                        prev = current;
                        current = current->next;
                    }
                    node->next = prev->next;
                    prev->next = node;
                }
            }
            head = head->next;
        }
        return sorted_head;
    }
};