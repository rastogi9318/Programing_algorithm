/*
I/p:-
5
1 2 3 4 5
2
O/p:-
2 1 4 3 5

I/p:-
5 
1 2 3 4 5 
3 
O/p:-
3 2 1 4 5
*/

class Solution {
public:
    int length(ListNode *head)
{
    int len = 0;
    while(head!=NULL)
    {
        head = head->next;
        len++;
    }
    return len;
}
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head == NULL)
        {
            return NULL;
        }
        ListNode* curr = head;
        ListNode* prev = NULL;
        ListNode* forward = NULL;
        int temp=0;
        int len = length(head);
        while(curr!=NULL && temp<k)
        {
            forward = curr->next;
            curr->next = prev;
            prev=curr;
            curr=forward;
            temp++;
        }
        len=len-k;
        if(forward!=NULL && len>=k)
        {
            head->next = reverseKGroup(forward,k);
        }
        else {
            head->next = forward;
        }
        return prev;
    }
};
