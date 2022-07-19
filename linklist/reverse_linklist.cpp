/* Iterative Approach */
class Solution
{
    public:
    //Function to reverse a linked list.
    struct Node* reverseList(struct Node *head)
    {
        // code here
        // return head of reversed list
        if(head==NULL || head->next==NULL)
        {
            return head;
        }
        struct Node *prev=NULL;
        struct Node *curr=head;
        struct Node *temp=NULL;
        while(curr!=NULL)
        {
            temp=curr->next;
            curr->next=prev;
            prev=curr;
            curr=temp;
        }
        return prev;
    }
};
/* Recursive Approach */
/*
class Solution
{
  public:
    void reverse(struct Node *head, struct Node *curr,struct Node *prev)
    {
       if(curr==NULL)
       {
           head=prev;
           return;
       }
       Node *forward = curr->next;
       reverse(head,forward,curr);
       curr->next=prev;
    }
    struct Node* reverseList(struct Node *head)
    {
        // code here
        // return head of reversed list
        struct Node *prev=NULL;
        struct Node *curr=head;
        reverse(head,curr,prev);
        return head;
    }
};
*/
