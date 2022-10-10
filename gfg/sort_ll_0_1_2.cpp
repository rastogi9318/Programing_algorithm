class Solution
{
    public:
    //Function to sort a linked list of 0s, 1s and 2s.
    Node* segregate(Node *head) {
        int count_0=0,count_1=0,count_2=0;
        Node *temp = head;
        while(temp!=NULL)
        {
            if(temp->data==0)
            {
                count_0++;
            }
            else if(temp->data==1)
            {
                count_1++;
            }
            else if(temp->data==2)
            {
                count_2++;
            }
            temp = temp->next;
        }
        temp = head;
        while(temp!=NULL)
        {
            if(count_0!=0)
            {
                temp->data = 0;
                count_0--;
            }
            else if(count_1!=0)
            {
                temp->data = 1;
                count_1--;
            }
            else if(count_2!=0)
            {
                temp->data = 2;
                count_2--;
            }
            temp=temp->next;
        }
        // Add code here
        return head;
        
    }
    
};
/*
class Solution
{
    public:
    void insertAttail(Node* &tail,Node *curr)
{
    tail->next = curr;
    tail = curr;
}
Node* segregate(Node *head)
{
    Node *zerohead = new Node(-1);
    Node *zerotail = zerohead;
    Node *onehead = new Node(-1);
    Node *onetail = onehead;
    Node *twohead = new Node(-1);
    Node *twotail = twohead;
    Node *temp = head;
    while(temp!=NULL)
    {
        int val = temp->data;
        if(val==0)
        {
            insertAttail(zerotail,temp);
        }
        if(val==1)
        {
            insertAttail(onetail,temp);
        }
        if(val==2)
        {
            insertAttail(twotail,temp);
        }
        temp = temp->next;
    }
    if(onehead->next!=NULL)
    {
        zerotail->next = onehead->next;
    }
    else
    {
        zerotail->next = twohead->next;
    }
    onetail->next = twohead->next;
    twotail->next=NULL;
    head=zerohead->next;
    delete zerohead;
    delete onehead;
    delete twohead;
    return head;
}
};
*/
