Node* deleteNode(Node *head,int x)
{
    //Your code here
    if(x==1)
    {
        return head->next;
    }
    Node *curr = head;
    int index = 1;
    while(index< x-1)
    {
        curr = curr->next;
        index++;
    }
    curr->next = curr->next->next;
    return head;
}
