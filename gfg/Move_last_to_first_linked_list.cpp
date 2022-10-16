/*
Input:-
N = 5
List = {2,5,6,2,1}
Output:-
{1,2,5,6,2}
*/

class Solution{
public:
    ListNode *moveToFront(ListNode *head){
        if(head==NULL)
        {
            return NULL;
        }
        if(head->next==NULL){
            return head;
        }
        ListNode *temp=head;
        ListNode *curr=head;
        ListNode *prev=head;
        while(curr->next!=NULL )
        {
            curr=curr->next; // reaching the last element  
        }
        while( prev->next->next!=NULL)
        {
             prev=prev->next;  // reaching the previous last element
        }
        prev->next=NULL; 
        curr->next=temp;
        return curr;
    }
    
};
