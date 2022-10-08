class Solution {
public:
    bool isPalindrome(ListNode* head) {
        stack<int> st_ll;   /* builtin stack */
        ListNode *temp=head;
        while(temp!=NULL)
        {
            st_ll.push(temp->val);
            temp = temp->next;
        }
        while(head!=NULL)
        {
            int data = st_ll.top();
            if(head->val!=data)
            {
                return false;
            }
            head=head->next;
            st_ll.pop();
        }
        return true;
        
    }
};
