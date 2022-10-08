Node *detect_cycle(Node *head)
{
    Node *slow = head;
    Node *fast = head;
    if(head == NULL)
    {
        return NULL;
    }
    while(slow!=NULL && fast!=NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast)
        {
            return slow;
        }
    }
    return NULL;
}
Node *cycle_start_node(Node *head)
{
    if(head == NULL)
    {
        return NULL;
    }
    Node *temp = detect_cycle(head);
    if(temp == NULL)
        return NULL;
    Node *slow = head;
    while(slow!=temp)
    {
        slow = slow->next;
        temp = temp->next;
    }
    return slow;
}
Node *removeLoop(Node *head)
{
    // Write your code here.
    Node *start_loop = cycle_start_node(head);
    if(start_loop == NULL)
    {
        return head;
    }
    Node *temp = start_loop;
    while(temp->next!=start_loop)
    {
        temp = temp->next;
    }
    temp->next = NULL;
    return head;
}
