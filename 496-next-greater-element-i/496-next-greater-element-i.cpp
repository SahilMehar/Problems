class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) 
    {
        int m = nums1.size();
        int n = nums2.size();
        vector<int> v;
        for(int i = 0; i < m; i++)
        {
            bool check = 0;
            for(int j = 0; j < n-1; j++)
            {
                if(nums1[i] == nums2[j])
                {
                    for(int k = j+1; k < n; k++)
                    {
                        if(nums2[k] > nums2[j])
                        {
                            v.push_back(nums2[k]);
                            check = 1;
                            break;
                        }
                    }
                }
               
            }
            if(check == 0)
                v.push_back(-1);
        }
      
        return v;
    }
};
