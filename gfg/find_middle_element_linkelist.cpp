class Solution{
    public:
    /* Should return data of middle node. If linked list is empty, then  -1*/
    int getMiddle(Node *head)
    {
        // Your code here
        int ans;
        if(head == NULL)
        {
            ans = -1;
            return ans;
        }
        if(head->next == NULL)
        {
            ans = head->data;
            return ans;
        }
    Node *fast = head->next;
    Node *slow = head;
    while(fast!=NULL)
    {
        fast = fast->next;
        if(fast!=NULL)
        {
            fast=fast->next;
        }
        slow = slow->next;
    }
    ans=slow->data;
    return ans;
    }
};
