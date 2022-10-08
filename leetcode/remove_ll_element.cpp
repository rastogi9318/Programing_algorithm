class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        while (head != NULL && head->val == val) 
        {
            head = head->next;
        }
        if (head == NULL) 
        {
            return NULL;
        }
        ListNode *curr = head;
        while (curr->next != NULL) {
            ListNode* nextNode = curr->next;
            if (nextNode->val == val) 
            {
                curr->next = nextNode->next;
            } 
            else {
                curr = curr->next;
            }
        }
        return head;
    }
};
