int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
    vector<int> dat(n, 1);   /* creating dat of n size as value of 1 */ 
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            if (nums[j] < nums[i])     /* comparing that sequence is in increasing ordere or not */
                dat[i] = max(dat[i], dat[j] + 1);
        }
    }
    int ans = dat[0];
    for (int i = 1; i < n; i++) {
        ans = max(ans, dat[i]);
    }
    return ans; 
    }
