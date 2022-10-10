/* Optimize Approach 
space:- O(n)
Time:- O(n)
*/
class Solution
{
    public:
    //Function to remove duplicates from unsorted linked list.
    Node * removeDuplicates( Node *head) 
    {
     unordered_map<int,bool> mp;
       Node *curr=head;
       Node *temp=curr->next;
       mp[curr->data]=true;
       while(temp!=NULL){
           if(mp.count(temp->data)==0){
               mp[temp->data]=true;
               curr=curr->next;
               temp=temp->next;
           }
           else if(mp.count(temp->data)!=0){
               curr->next=temp->next;
               temp=temp->next;
            }
       }
       return head;
    }
};


/*Below given approach is brute force but this will return TLE. 
Space :- O(1)
Time:-O(n2)
*/
/*
class Solution
{
    public:
    //Function to remove duplicates from unsorted linked list.
    Node * removeDuplicates( Node *head) 
    {
      Node *curr = head;
      while(curr!=NULL)
      {
        Node *temp = curr->next;
        while(temp!=NULL)
        {
          if(temp->next!=NULL && curr->data == temp->next->data)
          {
            Node *next_next == temp->next->next;
            Node *nodetodelete = temp->data;
            delete(nodetodelete);
            temp->next = next_next;
          }
          else
          {
            temp=temp->next;
          }
        }
        curr = curr->next;
      }
      return head;
    }
};
          
*/
