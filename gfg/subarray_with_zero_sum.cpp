bool subArrayExists(int arr[], int n)
    {
        //Your code here
        unordered_set<int> st;
        int pre_sum=0;
        for(int i=0;i<n;i++)
        {
            pre_sum+=arr[i];
            if(st.find(pre_sum)!=st.end())
            {
                return true;
            }
        if(pre_sum==0)
        {
            return true;
        }
        st.insert(pre_sum);
        }
        return false;
    }
