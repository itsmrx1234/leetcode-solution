class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if(!head || !head->next || !head->next->next) return head;
        ListNode *evenh=nullptr,*event=nullptr,*oddh=nullptr,*oddt=nullptr;
        int cnt=1;
        while(head){
            if(cnt&1){
                if(!oddh){
                    oddh=head;
                    oddt=head;
                }
                else{
                    oddt->next=head;
                    oddt=oddt->next;
                }
            }
            else{
                if(!evenh){
                    evenh=head;
                    event=head;
                }
                else{
                    event->next=head;
                    event=event->next;
                }
            }
            head=head->next;
                cnt++;
        }
        if(!evenh) return oddh;
        else if(!oddh) return evenh;
        event->next=nullptr;
        oddt->next=evenh;
        return oddh;
    }
};