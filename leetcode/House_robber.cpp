int rob(vector<int>& nums) {
        int n=nums.size();
        int temp1=0,temp2=0;
        for(int i=0;i<n;i++)
        {
            int t=max(temp1+nums[i],temp2);
            temp1=temp2;
            temp2=t;
        }
        return temp2;
    }
