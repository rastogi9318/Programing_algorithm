vector<int> next_smallest_element_left(vector<int> heights,int n)
    {
        stack<pair<int,int>> st;
        vector<int> arrL(n,0);
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
    vector<int> next_smallest_element_right(vector<int> heights,int n)
    {
        stack<pair<int,int>> st;
        vector<int> arrR(n,0);
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
            else  {
		    arrR[i]=st.top().second;
		}
            st.push({heights[i], i});
        }
        return arrR;
    }
    int largestRectangleArea(vector<int>& heights) {
        int n=heights.size();
        vector<int> r=next_smallest_element_right(heights,n);
        vector<int> l=next_smallest_element_left(heights,n);
        int ans=INT_MIN;
        for(int i=0;i<n;i++)
        {
            ans=max(ans,heights[i]*(r[i]-l[i]-1));
        }
        return ans;
    }
