vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> res; 
        vector<int> ans; 
        for(int i=0;i<nums1.size();i++) 
        { 
            res.insert(nums1[i]); 
        } 
        for(int i=0;i<nums2.size();i++) 
        { 
            if(res.find(nums2[i])!=res.end()) 
            { 
                ans.push_back(nums2[i]); 
                res.erase(nums2[i]); 
            } 
        } 
        return ans;
    }
