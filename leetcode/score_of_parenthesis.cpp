int scoreOfParentheses(string s) {
        int res=0;
        stack<int> stc;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='(')
            {
                stc.push(-1);
            }
            else
            {
                if(stc.top()==-1)
                {
                    stc.pop();
                    stc.push(1);
                }
                else
                {
                    int sum=0;
                    while(stc.top()!=-1)
                    {
                        sum=sum+stc.top();
                        stc.pop();
                    }
                    stc.pop();
                    stc.push(sum*2);
                }
            }
        }
        while(!stc.empty())
        {
            res=res+stc.top();
            stc.pop();
        }
        return res;
    }
