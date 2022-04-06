vector<long long> next_smallest_element_left(long long heights[],int n)
    {
        stack<pair<int,int>> st;
        vector<long long> arrL(n,0);
        for(int i=0;i<n;i++)
        {
            while(!st.empty() && st.top().first>=heights[i])
            {
                st.pop();
            }
            if(st.empty())
            {
                arrL[i]=-1;
            }
            else  {
		    arrL[i]=st.top().second;
		}
            st.push({heights[i], i});
        }
        return arrL;
    }
    vector<long long> next_smallest_element_right(long long heights[],int n)
    {
        stack<pair<int,int>> st;
        vector<long long> arrR(n,0);
        for(int i=n-1;i>=0;i--)
        {
            while(!st.empty() && st.top().first>=heights[i])
            {
                st.pop();
            }
            if(st.empty())
            {
                arrR[i]=n;
            }
            else  
            {
		            arrR[i]=st.top().second;
		        }
            st.push({heights[i], i});
        }
        return arrR;
    }
    
    long long getMaxArea(long long arr[], int n)
    {
        // Your code here
        vector<long long> r=next_smallest_element_right(arr,n);
        vector<long long> l=next_smallest_element_left(arr,n);
        long long ans=INT_MIN;
        for(int i=0;i<n;i++)
        {
            ans=max(ans,arr[i]*(r[i]-l[i]-1));
        }
        return ans;
    }
