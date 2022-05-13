class Solution {
public:
    void solve(vector<vector<int>> &ans, vector<int> &nums, int index)
    {
        if(index >= nums.size())
        {
            ans.push_back(nums);
            return ;
        }
        for(int i = index; i < nums.size(); i++)
        {
            swap(nums[index], nums[i]);
            solve(ans, nums, index+1);
            //Backtracking to original string so that we can swap changes in original one
            swap(nums[index], nums[i]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) 
    {
        vector<vector<int>> ans;
        int index = 0;
        solve(ans, nums, index);
        return ans;
    }
};