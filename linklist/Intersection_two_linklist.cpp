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
int findIntersection(Node *head1, Node *head2)
{
    //Write your code here
     Node *temp1 = head1;
         Node *temp2 = head2;
         int cnt1 = length(temp1);
         int cnt2 = length(temp2);
         if(cnt1 > cnt2)
         {
             int diff = cnt1-cnt2;
             while(diff != 0)
             {
                 temp1 = temp1->next;
                 diff--;
             }
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
            while(dif != 0)
            {
                temp2 = temp2->next;
                dif--;
            }
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
