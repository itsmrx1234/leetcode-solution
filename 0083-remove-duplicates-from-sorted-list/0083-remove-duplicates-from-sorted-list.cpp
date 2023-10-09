class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
            if(!head) return head;
    ListNode* current=head;
    while(current&&current->next){
        if(current->val==current->next->val){
            ListNode* dummy=current->next;
            current->next=dummy->next;
            delete dummy;
        }
        else
        current=current->next;
    }
    return head;
    }
};