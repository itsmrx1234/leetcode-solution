class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* p = headA;
        ListNode* q = headB;

        while (p != q) {
            // If p reaches the end of list A, move it to the head of list A
            p = (p == nullptr) ? headA : p->next;

            // If q reaches the end of list B, move it to the head of list B
            q = (q == nullptr) ? headB : q->next;
        }

        return p;
    }
};