void nextPermutation(vector<int>& nums) {
        int n=nums.size();
        if(n==1)
            return;
        int indx1;
        for(int i=n-2;i>=0;i--)    /* taking n-2 because comparing between nums[i],nums[i+1]*/
        {
            if(nums[i]<nums[i+1])
            {
                indx1=i;
                break;
            }
        }
        if(indx1<0) /* for checking given array is in increasing order*/
        {
            reverse(nums.begin(),nums.end());
        }
        else
        {
            int indx2;
            for(int i=n-1;i>=0;i--)
            {
                if(nums[indx1]<nums[i])
                {
                    indx2=i;
                    break;
                }
            }
            swap(nums[indx1],nums[indx2]);
            reverse(nums.begin()+indx1+1,nums.end());
        }
    }
