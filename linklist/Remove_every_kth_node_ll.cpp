Node *getResult(Node *head, int k)
{
    // If linked list has no node
    if (head == NULL)
    {
        return NULL;
    }
    if (k == 1)
    {
        freeList(head);
        return NULL;
    }
    Node *temp = head, *previous = NULL;
    int count = 0;
    while(temp != NULL)
    {
        count++;
        // If that particular 'temp' node is required Kth node
        if (k == count)
        {
            Node *store = temp -> next;
            delete(previous -> next);
            previous -> next = store;
            count = 0;
        }
     if (count != 0)
        {
            previous = temp;
        }
        temp = previous -> next;
    }
    return head;
}
