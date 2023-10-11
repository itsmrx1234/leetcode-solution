class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* temp = nullptr;
        ListNode* result = new ListNode(); // Create a dummy node for the result
        temp = result;
        int carry = 0;

        while (l1 || l2 || carry) {
            int sum = 0;
            
            if (l1) {
                sum += l1->val;
                l1 = l1->next;
            }
            
            if (l2) {
                sum += l2->val;
                l2 = l2->next;
            }
            
            sum += carry;
            carry = sum / 10;
            
            temp->next = new ListNode(sum % 10); // Create a new node for the result
            temp = temp->next;
        }

        return result->next; // Skip the dummy node, return the actual result
    }
};