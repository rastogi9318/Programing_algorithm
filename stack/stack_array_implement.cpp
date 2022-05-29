// Online C++ compiler to run C++ program online
#include<bits/stdc++.h>
using namespace std;

class stack1
{
    int n;
    int *arr;
    int top;
    public:
        stack1(int n)
        {
            this -> n = n;
            arr = new int[n];
            top=-1;
        }
        void push(int x)
        {
            if(top==n-1)
            {
                cout<<"Overflow";
                return;
            }
            top+=1;
            arr[top]=x;
        }
        void pop()
        {
            if(top==-1)
            {
                cout<<"Underflow";
                return;
            }
            else
            {
                top--;
            }
        }
        int Top()
        {
            if(top==-1)
            {
                cout<<"Underflow";
                return -1;
            }
            return arr[top];
        }
        bool empty()
        {
            if(top==-1)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
};

int main()
{
    stack1 s(5);
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    cout<<s.Top()<<endl;
    s.pop();
    s.pop();
    cout<<s.Top()<<endl;
    s.pop();
    s.pop();
    cout<<s.empty();
    return 0;
}
