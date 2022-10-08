class Solution{
  public:
    //Function to check whether the list is palindrome.
    bool isPalindrome(Node *head)
    {
        //Your code here
        stack<int> st_ll;  /* builtin stack */
        Node *temp=head;
        while(temp!=NULL)
        {
            st_ll.push(temp->data);
            temp = temp->next;
        }
        while(head!=NULL)
        {
            int data = st_ll.top();
            if(head->data!=data)
            {
                return false;
            }
            head=head->next;
            st_ll.pop();
        }
        return true;
        
    
    }
};



