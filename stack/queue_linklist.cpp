#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data=data;
        next = NULL;
    }
};
class QueueLL
{
    Node *Front;
    Node *Rear;
public:
    QueueLL()
    {
        Front = NULL;
        Rear = NULL;
    }
    void enqueue(int data)
    {
        Node *n = new Node(data);
        if(Rear==NULL)
        {
            Rear = Front = n;
        }
        else{
            Rear->next = n;
            Rear = n;
        }
    }
    int dequeue()
    {
        if(Front == NULL)
        {
            cout<<" Stack Underflow";
            return -1;
        }
        Node *temp = Front;
        int tempdata = Front->data;
        if(Front == Rear)
        {
            Front = Rear =NULL;
        }
        else{
            Front = Front->next;
        }
        delete temp;
        return tempdata;
    }
    void display()
    {
        while(Front!=NULL)
        {
            cout<<Front->data<<" ";
            Front = Front -> next;
        }
    }
    ~QueueLL(){
    Node *next;
    while(Front != NULL)
    {
        next = Front -> next;
        delete Front;
        Front = next;
    }
    }
};
int main()
{
    QueueLL q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.enqueue(5);
    cout<<q.dequeue()<<endl;
    cout<<q.dequeue()<<endl;
    q.display();
    return 0;
}

