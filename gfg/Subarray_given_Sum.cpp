/*
class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(int arr[], int n, long long s)
    {
        // Your code here
        vector<int> vec;
        int sum =0;
        for(int i=0;i<n-1;i++)
        {
            for(int j=i;j<n;j++)
            {
                sum=sum+arr[j];
                if(sum == s)
                {
                    vec.push_back(i+1);
                    vec.push_back(j+1);
                    return vec;
                }
                else {
                    vec.clear();
                }
            }
            sum=0;
        }
        vec.push_back(-1);
        return vec;
        
    }
};
This is approach containing time complexity of O(n2) we have to write code in O(n) so this will give us a TLE.
*/

class Solution
{
    public:
    vector<int> subarraySum(int arr[], int n, long long s)
    {
        // Your code here
        vector<int> vec;
        int sum=0;
        int k=0;
        for(int i=0;i<n;i++){
            sum=sum+arr[i];
            if(sum==s){
                vec.push_back(k+1);
                vec.push_back(i+1);
                break;
           }
            if(sum>s){
                i=k++;
                sum=0;
            }
        }
        if(vec.size()==0){
            vec.push_back(-1);
        }
             return vec;
    }
};

