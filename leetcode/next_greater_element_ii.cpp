vector<int> nextGreaterElements(vector<int>& nums) {
        stack<int> st;
        int n=nums.size();
        vector<int> res(n);
        for(int i=n-1;i>=0;i--)
        {
            st.push(i);
        }
        for(int i=n-1;i>=0;i--)
        {
            while(!st.empty()&&nums[i]>=nums[st.top()])
            {
                st.pop();
            }
            if(!st.empty())
            {
                res[i]=nums[st.top()];
            }
            if(st.empty())
            {
                res[i]=-1;
            }
            st.push(i);
        }
        return res;
    }
