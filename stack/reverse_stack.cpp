// Online C++ compiler to run C++ program online
#include<bits/stdc++.h>
using namespace std;
void insertAtBottom(stack<int> &st1, int ele)
{
    if(st1.empty())
    {
        st1.push(ele);
        return;
    }
    int topele = st1.top();
    st1.pop();
    insertAtBottom(st1,ele);
    st1.push(topele);
}
void reverse_st(stack<int> &st1)
{
    if(st1.empty())
    {
        return;
    }
    int ele = st1.top();
    st1.pop();
    reverse_st(st1);
    insertAtBottom(st1,ele);
}
int main()
{
    stack<int> st1;
    st1.push(1);
    st1.push(2);
    st1.push(3);
    st1.push(4);
    st1.push(5);
    reverse_st(st1);
    while(!st1.empty())
    {
        cout<<st1.top()<<endl;
        st1.pop();
    }
    return 0;
}
