long long maxArea(long long A[], int len)
{
    // Your code goes here
        int i=0;
        int j=len-1;
        long long res=0;
        while(i<j)
        {
            if(A[i]<=A[j])
            {
                res=max(res,A[i]*(j-i));
                i++;
            }
            else
            {
                res=max(res,A[j]*(j-i));
                j--;
            }
        }
        return res;
}
int main()
{
  int n;
  cin>>n;
  long long arr[n];
  for(int i=0;i<n;i++)
    cin>>arr[i];
  cout<<maxArea(arr,n)<<endl;
  return 0;
}
