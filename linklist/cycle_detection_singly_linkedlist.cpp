/*
1. I/P:-
   3 2 0 -4 -1
   1
   O/p:- true

2. I/P:-
   1 -1
   -1
   O/P:-false
*/



bool detectCycle(Node *head)
{
	//	Write your code here
    Node *slow = head, *fast = head;
 
    while (slow!=NULL && fast!=NULL && fast->next!=NULL) {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast) {
            return 1;
        }
    }
    return 0;
}
