class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(head == NULL || head->next == NULL)
            return NULL;
    ListNode *slow = head, *fast = head, *ptr = head;
    while(fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;
        if(slow==fast)
        {
            break;
        }
    }
    if(slow!=fast)
    return NULL;
    
    while(slow!=ptr)
    {
        ptr = ptr->next;
        slow = slow->next;
    }
    return ptr;
    }
};
