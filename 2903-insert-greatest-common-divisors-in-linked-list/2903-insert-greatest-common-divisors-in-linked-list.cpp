class Solution {
public:
int gcd(int a, int b){
        if(b==0) return a;
        return gcd(b,a%b);
    }
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
       ListNode* curr=head;
       while(curr->next){
           ListNode* dummy=new ListNode(gcd(curr->val,curr->next->val));
           ListNode* temp=curr->next;
           curr->next=dummy;
           dummy->next=temp;
           curr=temp;
       }
       return head;
    }
};