class Solution {
public:
    int getDecimalValue(ListNode* head) {
        head = reverseLinkedList(head); // Reverse the linked list first
        int ans = 0;
        int i = 1;
        while (head) {
            ans += head->val * i;
            head = head->next;
            i *= 2;
        }
        return ans;
    }

    ListNode* reverseLinkedList(ListNode* head) {
        ListNode* prev = nullptr;
        ListNode* current = head;
        while (current) {
            ListNode* next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }
        return prev;
    }
};