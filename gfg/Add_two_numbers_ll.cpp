class Solution
{
    private:
    Node* reversell(Node* head)
    {
        Node* prev = NULL;
        Node* curr = head;
        Node* next1 = NULL;
        while(curr!=NULL)
        {
            next1 = curr->next;
            curr->next = prev;
            prev= curr;
            curr =  next1;
        }
        return prev;
    }
    void insertatTail(struct Node* &head,struct Node* &tail, int digit)
    {
        Node *temp = new Node(digit);
        if(head == NULL)
        {
            head = temp;
            tail = temp;
            return;
        }
        else
        {
            tail->next = temp;
            tail = temp;
        }
    }
    struct Node *add(struct Node *l1, struct Node *l2)
    {
    int carry =0;
         Node *anshead=NULL;
        Node *anstail=NULL;
        while(l1!=NULL && l2!=NULL){
            int sum = carry + l1->data+ l2->data;
            int digit = sum%10;
            insertatTail(anshead,anstail,digit);
            carry = sum/10;
            l1=l1->next;
            l2=l2->next;
        }
        while(l1!=NULL)
        {
            int sum = carry + l1->data;
            int digit = sum%10;
            insertatTail(anshead,anstail,digit);
            carry = sum/10;
            l1 = l1->next;
        }
        while(l2!=NULL)
        {
            int sum = carry + l2->data;
            int digit = sum%10;
            insertatTail(anshead,anstail,digit);
            carry = sum/10;
            l2=l2->next;
        }
        while(carry!=0)
        {
            int sum = carry;
            int digit = sum%10;
            insertatTail(anshead,anstail,digit);
            carry = sum/10;
        }
        return anshead;
    }
    public:
    //Function to add two numbers represented by linked list.
    struct Node* addTwoLists(struct Node* l1, struct Node* l2)
    {
        // code here
        l1 = reversell(l1);
        l2 = reversell(l2);
        Node *ans =  add(l1,l2);
        ans = reversell(ans);
        return ans;
    }
};
