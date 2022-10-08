/* optimize */
//{ Driver Code Starts
// driver code

#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
    
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

void loopHere(Node* head, Node* tail, int position)
{
    if(position==0) return;
    
    Node* walk = head;
    for(int i=1; i<position; i++)
        walk = walk->next;
    tail->next = walk;
}

bool isLoop(Node* head)
{
    if(!head) return false;
    
    Node* fast = head->next;
    Node* slow = head;
    
    while( fast != slow)
    {
        if( !fast || !fast->next ) return false;
        fast=fast->next->next;
        slow=slow->next;
    }
    
    return true;
}

int length(Node* head)
{
    int ret = 0;
    while(head)
    {
        ret++;
        head = head->next;
    }
    return ret;
}


// } Driver Code Ends
/*
structure of linked list node:

struct Node
{
    int data;
    Node* next;
    
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

*/
#include<bits/stdc++.h>
class Solution
{
    public:
    //Function to remove a loop in the linked list.
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
          fast = fast->next;
         if(fast!=NULL){
             fast = fast->next;
         }
         slow = slow->next;
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
void removeLoop(Node *head)
{
    // Write your code here.
    if(head == NULL)
    {
        return;
    }
    Node *start_loop = cycle_start_node(head);
    if(start_loop == NULL)
    {
        return;
    }
    Node *temp = start_loop;
    while(temp->next!=start_loop)
    {
        temp = temp->next;
    }
    temp->next = NULL;
    return;
}
};

/*
void removeLoop(Node *head)
{
    Node *fast=head;
    Node *slow=head;
    while(fast != null && fast->next != null)
    {
      fast=fast->next->next;
      slow=slow->next;
      if(slow->next==head)
      {
        slow->next=null;
        return;
      }
      if(slow == fast)
      {
        Node *temp=head;  
        while(slow->next != temp->next)
        {
          slow=slow->next;
          temp=temp->next;
        }
        slow->next=null;
        return;
      }
  }
}

*/

