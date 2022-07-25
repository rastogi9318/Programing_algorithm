/* Efficient Approach */

Node *findMiddle(Node *head)
{
    if(head == NULL || head->next == NULL)
    {
        return head;
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
    return slow;
}

/* Brute force */
/*
int length(Node *head)
{
    int len = 0;
    while(head!=NULL)
    {
        head = head->next;
        len++;
    }
    return len;
}
Node *findMiddle(Node *head) {
    // Write your code here
    int len = length(head);
    int ans = (len/2);
    Node *temp = head;
    int tmp = 0;
    while(tmp<ans)
    {
        temp = temp->next;
        tmp++;
    }
    return temp;
}*/
