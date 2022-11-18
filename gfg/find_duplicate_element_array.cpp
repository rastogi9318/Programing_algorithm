#include<bits/stdc++.h>
class Solution{
  public:
    vector<int> duplicates(int arr[], int n) {
        // Approach :- 1
        /*
        sort(arr,arr+n);
        vector<int> dupl;
        int repeat=INT_MIN;
        for(int i=1;i<n;i++)
        {
            if(arr[i]==arr[i-1] && arr[i]!=repeat)
            {
                dupl.push_back(arr[i]);
                repeat = arr[i];
            }
        }
        if(dupl.empty())
        {
            return {-1};
        }
        else
        {
        return dupl;
        */
      // Approach :-2
        vector<int> dupl;
        for(int i=0;i<n;i++)
        {
            int indx = arr[i]%n;
            arr[indx] = arr[indx]+n;
        }
        for(int i=0;i<n;i++)
        {
            if((arr[i]/n)>=2)
            {
                dupl.push_back(i);
            }
        }
        if(dupl.empty())
        {
            return {-1};
        }
        else
        {
       return dupl;
    }
    }
};
