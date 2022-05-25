// https://leetcode.com/problems/sort-list
class Solution {
public:
    ListNode* sortList(ListNode* head) {
        std::vector<int> numbers;
        ListNode* node = head;
        while (node) {
            numbers.push_back(node->val);
            node = node->next;
        }
        std::sort(numbers.begin(), numbers.end());
        node = head;
        int i = 0;
        while (node) {
            node->val = numbers[i];
            ++i;
            node = node->next;
        }
        return head;
    }
};