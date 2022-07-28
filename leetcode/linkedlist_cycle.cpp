class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode *slow = head;
        ListNode *fast = head;
        while (slow!=NULL && fast!=NULL && fast->next!=NULL) 
        {
            slow = slow->next;
            fast = fast->next->next;
            if (slow == fast) {
                return 1;
            }
        }
        return 0;
    }
};
