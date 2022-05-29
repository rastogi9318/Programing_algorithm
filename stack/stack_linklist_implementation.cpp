#include<bits/stdc++.h>
using namespace std;
class Node{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data=data;
        next= NULL;
    }
};
class StackLL
{
    Node *top;
public:
    StackLL(){
        top = NULL;
    }
    void push(int data)
    {
        Node *n = new Node(data);
        if(top == NULL)
        {
            top=n;
        }
        else
        {
            n->next = top;
            top=n;
        }
    }
    int pop()
    {
        if(top == NULL)
        {
            cout<<"Stack Empty";
            return -1;
        }
        else{
            int tempdata=top->data;
            Node *temp=top;
            top = top -> next;
            delete temp;
            return tempdata;
        }
    }
    void display()
    {
        while(top!=NULL)
        {
            cout<<top->data<<" ";
            top = top->next;
        }
    }
    ~StackLL(){
        Node *next;
        while(top!=NULL)
        {
            next = top -> next;
            delete top;
            top = next;
        }
    }
};
int main()
{
    StackLL st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    cout<<st.pop()<<endl;
    cout<<st.pop()<<endl;
    st.display();
    return 0;
}
