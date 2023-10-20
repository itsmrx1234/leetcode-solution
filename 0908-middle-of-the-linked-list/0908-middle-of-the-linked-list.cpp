class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* slow=head;
        while(head&&head->next){
            slow=slow->next;
            head=head->next->next;
        }
        return slow;
    }
};