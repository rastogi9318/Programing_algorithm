class Solution {
  public:
    int binarysearch(int arr[], int n, int k) {
    int l = 0, r = n - 1;
    while (l <= r)
    {
        int mid = (l + r)/2;    
        if (k == arr[mid]) {
            return mid;
        }
        else if (k < arr[mid]) {
            r = mid - 1;
        }
        else {
            l = mid + 1;
        }
    }
    return -1;
    }
};
