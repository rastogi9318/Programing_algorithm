class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        if(head==NULL || head->next==NULL)
        {
            return NULL;
        }
        ListNode* temp = head;
        int len=0;
        while(temp!=NULL)
        {
            len++;
            temp=temp->next;
        }
        int ind= len/2;
        ListNode* temp1 = head;
        int i=0;
        while(i<ind)
        {
            if(i==ind-1)
            {
                temp1->next = temp1->next->next;
            }
            temp1 = temp1->next;
            i++;
        }
        return head;
    }
};
