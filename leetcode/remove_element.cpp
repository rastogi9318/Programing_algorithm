int removeElement(vector<int>& arr, int val) {
        int i = 0;
        int n = arr.size();
        while (i < n) 
        {
            if (arr[i] == val) 
            {
                arr[i] = arr[n - 1];
                n--;
            } 
            else 
            {
                i++;
            }
        }
        return n;
    }
