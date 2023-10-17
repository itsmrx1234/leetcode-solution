class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* p=headA;
        ListNode* q=headB;
        while(p != q){
          p=p?p->next:headB;
          q=q?q->next:headA;
        }
       return p;
    }
};