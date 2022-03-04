long long maxSubarraySum(int arr[], int n){
        long long max1 = INT_MIN, max = 0;
    for (int i = 0; i < n; i++)
    {
        max = max + arr[i];
        if (max1 < max)
        {
            max1 = max; 
        }
        if (max < 0)
        {
            max=0;
        }
    }
       return max1; 
    } 
