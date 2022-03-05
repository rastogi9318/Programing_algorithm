int maxProfit(vector<int>& prices) {
        int N=prices.size();
        int maxprofit=0,minprofit=prices[0],i;
  for(i=0;i<N;i++)
  {
    if(prices[i]-minprofit>maxprofit)
    {
      maxprofit=prices[i]-minprofit;
    }
    if(prices[i]<minprofit)
    {
      minprofit=prices[i];
    }
  }
  return maxprofit;
    }
