/*
Example 1:

Input: arr = [1,1,2,2,3,3,4,4,5,5], target = 8
Output: 20
Explanation: 
Enumerating by the values (arr[i], arr[j], arr[k]):
(1, 2, 5) occurs 8 times;
(1, 3, 4) occurs 8 times;
(2, 2, 4) occurs 2 times;
(2, 3, 3) occurs 2 times.
Example 2:

Input: arr = [1,1,2,2,2,2], target = 5
Output: 12
Explanation: 
arr[i] = 1, arr[j] = arr[k] = 2 occurs 12 times:
We choose one 1 from [1,1] in 2 ways,
and two 2s from [2,2,2,2] in 6 ways.
*/
int threeSumMulti(vector<int>& arr, int target) {
        int n = arr.size(), mod = 1e9+7, ans = 0;
        unordered_map<int, int> m;
        for(int i=0; i<n; i++) 
        {
            ans = (ans + m[target - arr[i]]) % mod;    
            for(int j=0; j<i; j++)
            {
                m[arr[i] + arr[j]]++;
            }
        }
        return ans;
    }
