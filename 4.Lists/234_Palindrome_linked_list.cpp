// https://leetcode.com/problems/palindrome-linked-list
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        std::vector<int> values;
        while (head) {
            values.push_back(head->val);
            head = head->next;
        }
        for (int i = 0; i < values.size() / 2; ++i) {
            if (values[i] != values[values.size() - 1 - i]) {
                return false;
            }
        }
        return true;
    }
};