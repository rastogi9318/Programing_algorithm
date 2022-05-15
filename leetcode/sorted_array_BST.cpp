TreeNode* sortedArrayToBST(vector<int>& nums) {
        int end=nums.size()-1;
        return Construct_tree(nums,0,end);
    }
    TreeNode* Construct_tree(vector<int> nums,int start,int end)
    {
        if(start>end)
        {
            return NULL;
        }
        else
        {
            int mid=(start+end)/2;
            TreeNode* root=new TreeNode(nums[mid]);
            root->left=Construct_tree(nums,start,mid-1);
            root->right=Construct_tree(nums,mid+1,end);
            return root;
        }
    }
