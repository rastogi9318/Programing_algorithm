/*
Input: 1 -> 3 -> 4 
       x = 3
Output: 1 -> 3
Explanation:
After deleting the node at 3rd
position (1-base indexing), the
linked list is as 1 -> 3. 
*/

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
