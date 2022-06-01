#include<bits/stdc++.h>
using namespace std;
class Node{
public:
    int data;
    Node *next;
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};
/* Insert the element at the end of the linklist */
    void insertAtTail(Node* &head, int val)
    {
        Node* n = new Node(val);
        if(head == NULL)
        {
            head = n;
            return;
        }
        Node *temp = head;
        while(temp->next!=NULL)
        {
            temp = temp->next;
        }
        temp -> next = n;
    }
/* display the element of the linklist */
    void display(Node* head)
    {
        Node *temp = head;
        while(temp!=NULL)
        {
            cout<<temp->data<<" -> ";
            temp = temp -> next;
        }
        cout<<"NULL"<<endl;
    }

/* Insert the element at the starting of the linklist */
    void insertAtHead(Node* &head, int val)
    {
        Node *n = new Node(val);
        n->next = head;
        head = n;
    }
/* Insert the element at given position to the linklist*/
    void insertAtposition(Node* &head,int position,int val)
    {
        if(position == 1)
        {
            insertAtHead(head,val);
            return;
        }
        Node* temp = head;
        int idx = 1;
        while(idx < position-1)
        {
            temp = temp->next;
            idx++;
        }
        /* Inserting last given position of the linklist element */
        if(temp->next == NULL)
        {
            insertAtTail(head,val);
            return;
        }
        Node *n = new Node(val);
        n -> next = temp -> next;
        temp-> next = n;
    }
    bool search1(Node* head, int key)
    {
        Node *temp = head;
        while(temp!=NULL)
        {
            if(temp->data == key)
            {
                return true;
            }
            temp=temp->next;
        }
        return false;
    }

int main()
{
    Node *head = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    display(head);
    insertAtHead(head, 0);
    display(head);
    insertAtposition(head,3,5);
    display(head);
    cout<<search1(head, 3);
    return 0;
}

