// https://leetcode.com/problems/odd-even-linked-list
class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        ListNode* odd_part_head = nullptr;
        ListNode* odd_part_tail = nullptr;
        auto* node = head;
        while (node) {
            if (node->next == nullptr) {
                node->next = odd_part_head;
                break;
            }
            auto* next = node->next;
            node->next = next->next;
            next->next = nullptr;
            if (!odd_part_head) {
                odd_part_head = next;
                odd_part_tail = next;
            } else {
                odd_part_tail->next = next;
                odd_part_tail = next;
            }
            if (node->next == nullptr) {
                node->next = odd_part_head;
                break;
            }
            node = node->next;
        }
        return head;
    }
};