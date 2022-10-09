/* Approach1
Space:- O(1)
Time:- O(m+n)
*/
int intersectPoint(Node* head1, Node* head2)
{
    // Your Code Here
    Node *temp1=head1;
    Node *temp2=head2;
    while(temp1!=temp2)
    {
        if(temp1==NULL)
        {
            temp1=head2;
        }
        else
        {
            temp1=temp1->next;
        }
        if(temp2==NULL)
        {
            temp2=head1;
        }
        else
        {
            temp2=temp2->next;
        }
    }
    return temp1->data;
}
/*
Approach 2
Space:- O(1)
Time:- O(m+n)
*/

int length(Node *head)
    {
        int cnt = 0;
        while(head != NULL)
        {
            cnt++;
            head = head->next;
        }
        return cnt;
    }

int intersectPoint(Node *head1, Node *head2)
 {
         // code here
         Node *temp1 = head1;
         Node *temp2 = head2;
         int cnt1 = length(temp1);
         int cnt2 = length(temp2);
         if(cnt1 > cnt2)
         {
             int diff = cnt1-cnt2;
             temp1 = head1;
             while(diff != 0)
             {
                 temp1 = temp1->next;
                 diff--;
             }
             temp2 = head2;
             while(temp1 != NULL && temp2 != NULL)
             {
                 if(temp1 == temp2)
                 {
                     return temp1->data;
                 }
                 temp1 = temp1->next;
                 temp2 = temp2->next;
             }
         }
         else
         {
            int dif = cnt2-cnt1;
            temp2 = head2;
            while(dif != 0)
            {
                temp2 = temp2->next;
                dif--;
            }
            temp1 = head1;
            while(temp1 != NULL && temp2 != NULL)
             {
                 if(temp1 == temp2)
                 {
                     return temp1->data;
                 }
                 temp1 = temp1->next;
                 temp2 = temp2->next;
             }
         }
         return -1;
 }

