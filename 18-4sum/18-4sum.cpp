class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) 
    {
        vector<vector<int>> ans;
        int n = nums.size();
        sort(nums.begin(), nums.end());
        for(int i = 0; i < n-1; i++)
        {
            for(int j = i+1; j < n; j++)
            {
                int tar = target - nums[i] - nums[j];
                int l = j+1;
                int r = n-1;
                while(l < r)
                {
                    if(nums[l] + nums[r] > tar)
                        r--;
                    else if(nums[l] + nums[r] < tar)
                        l++;
                    else
                    {
                        vector<int> v(4,0);
                        v[0] = nums[i];
                        v[1] = nums[j];
                        v[2] = nums[l];
                        v[3] = nums[r];
                        ans.push_back(v);
                        
                        while(l < r && nums[l] == v[2])
                            l++;
                        while(l < r && nums[r] == v[3])
                            r--;
                    }
                    
                }
                while(j+1 < n && nums[j+1] == nums[j])
                        j++;
            }
            while(i+1 < n && nums[i+1] == nums[i])
                    i++;
        }
        return ans;
    }
};