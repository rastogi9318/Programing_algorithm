Node *removeDuplicates(Node *head)
{
 // your code goes here
  if (head == NULL || head->next == NULL) 
        {
            return head;
        }
        
        Node *curr = head;
        while (curr!=NULL && curr->next != NULL) {
            Node* nextNode = curr->next;
            if (nextNode->data == curr->data) 
            {
                curr->next = nextNode->next;
                nextNode=curr;
            } 
            else {
                curr = curr->next;
            }
        }
        return head;
}
