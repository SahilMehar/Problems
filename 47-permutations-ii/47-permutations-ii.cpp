class Solution {
public:
    void solve(set<vector<int>>& st, vector<int> &nums, int index)
    {
        if(index >= nums.size())
        {
            st.insert(nums);
            return ;
        }
        for(int i = index; i < nums.size(); i++)
        {
            
            swap(nums[index], nums[i]);
            solve(st, nums, index+1);
            swap(nums[index], nums[i]);
            
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) 
    {

        set<vector<int>> st;
        int index = 0;
        solve(st, nums, index);
        vector<vector<int>> ans(st.begin(),st.end());
        return ans;
    }
};