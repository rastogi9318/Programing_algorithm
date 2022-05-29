#include<bits/stdc++.h>
using namespace std;
void reverseSentence(string str1)
{
    stack<string> s;
    for(int i=0;i<str1.length();i++)
    {
        string word="";
        while(str1[i]!=' '&& i<str1.length())
        {
            word+=str1[i];
            i++;
        }
        s.push(word);
    }
    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
}
int main()
{
    string str1="Hey, how are you doing?";
    reverseSentence(str1);
    return 0;
}
