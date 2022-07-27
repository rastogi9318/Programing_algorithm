class Solution
{
    public:
    struct node *reverse (struct node *head, int k)
    { 
        // Complete this method
        /* base condition */
        if(head == NULL)
        {
            return head;
        }
        struct node *curr=head;
        struct node *prev=NULL;
        struct node *forward=NULL;
        int temp=0;
        while(curr!=NULL && temp<k)
        {
            forward = curr->next;
            curr->next = prev;
            prev=curr;
            curr=forward;
            temp++;
        }
        if(forward!=NULL)
        {
            head->next = reverse(forward,k);
        }
        return prev;
    }
};
