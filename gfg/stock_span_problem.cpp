vector <int> calculateSpan(int price[], int n)
    {
       // Your code here
       stack<pair<int,int>> st;
       vector<int> span;
       vector<int> ans;
       for(int i = 0; i < n; i++) 
       {
	    while(!st.empty() && st.top().first <= price[i]) 
      {
			  st.pop();
		  }
		if(st.empty()) 
    {
		    ans.push_back(-1);
		}
		else  
    {
		    ans.push_back(st.top().second);
		}
		st.push({price[i], i});
	}
	for(int i = 0; i < n; i++) 
  {
		span.push_back(i - ans[i]);
	}
	return span;
  }
