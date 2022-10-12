/*
Input: l1 = [9,9,9,9,9,9,9], l2 = [9,9,9,9]
Output: [8,9,9,9,0,0,0,1]
*/

class Solution {

public:
    ListNode *resList = new ListNode(0);
    ListNode *head = resList;
    int carry = 0;
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int sum = l1->val + l2->val + carry;
        carry  = sum / 10;
        resList->next = new ListNode(sum % 10);
        resList = resList->next;

    if(l1->next != NULL && l2->next != NULL)
        addTwoNumbers(l1->next, l2->next);  
    else if (l1->next != NULL)
        addTwoNumbers(l1->next, new ListNode(0)); 
    else if (l2->next != NULL)
        addTwoNumbers(new ListNode(0), l2->next);   
    else if (carry > 0)
    {
        resList->next = new ListNode(1);
        resList = resList->next;
    }     
    return head->next;
    }
    
};
