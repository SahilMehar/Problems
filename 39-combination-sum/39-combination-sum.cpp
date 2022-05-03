class Solution {
public:
    void check(vector<int>& candidates, vector<vector<int>>& ans, vector<int>& temp, int i,                 int target)
    {
        if(i == candidates.size())
            return ;
        else if(target == 0)
        {
            ans.push_back(temp);
            return ;
        }
        if(candidates[i] <= target)
        {
            temp.push_back(candidates[i]);
            check(candidates,ans,temp,i,target-candidates[i]);
            temp.pop_back();
        }
        check(candidates,ans,temp,i+1,target);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) 
    {
        vector<vector<int>> ans;
        vector<int> temp;
        check(candidates, ans, temp, 0, target);
        return ans;
    }
};
