class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if (head == NULL || head->next == NULL) 
        {
            return head;
        }
        
        ListNode *curr = head;
        while (curr!=NULL && curr->next != NULL) {
            ListNode* nextNode = curr->next;
            if (nextNode->val == curr->val) 
            {
                curr->next = nextNode->next;
                nextNode=curr;
            } 
            else {
                curr = curr->next;
            }
        }
        return head;
    }
};
