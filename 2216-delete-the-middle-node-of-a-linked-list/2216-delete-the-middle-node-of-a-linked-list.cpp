class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
         if(head == NULL){
            return NULL;
        }

        if(head -> next == NULL){
            return NULL;
        }
        ListNode* fast=head,*slow=head,*prev=nullptr;
        while(fast&&fast->next){
            prev=slow;
            slow=slow->next;
            fast=fast->next->next;
        }
        prev->next=slow->next;
        return head;
        
    }
};