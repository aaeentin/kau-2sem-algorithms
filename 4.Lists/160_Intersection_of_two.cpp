// https://leetcode.com/problems/intersection-of-two-linked-lists
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        std::unordered_set<ListNode*> nodes;
        while (headA && headB) {
            if (nodes.find(headA) != nodes.end()) {
                return headA;
            }
            nodes.insert(headA);
            if (nodes.find(headB) != nodes.end()) {
                return headB;
            }
            nodes.insert(headB);
            headA = headA->next;
            headB = headB->next;
        }
        while (headA) {
            if (nodes.find(headA) != nodes.end()) {
                return headA;
            }
            nodes.insert(headA);
            headA = headA->next;
        }
        while (headB) {
            if (nodes.find(headB) != nodes.end()) {
                return headB;
            }
            nodes.insert(headB);
            headB = headB->next;
        }
        return nullptr;
    }
};