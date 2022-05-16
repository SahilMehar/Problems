class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) 
    {
        vector<vector<int>> ans;
        vector<pair<int,int>> v;
        int m = intervals.size(), n = intervals[0].size();
        if(m == 0)
            return ans;
        sort(intervals.begin(), intervals.end());
        vector<int> temp(2,0);
        temp[0] = intervals[0][0];
        temp[1] = intervals[0][1];
        for(int i = 0; i < m; i++)
        {
            if(temp[1] >= intervals[i][0])
            {
                temp[1] = max(temp[1], intervals[i][1]);
            }
            else
            {
                ans.push_back(temp);
                temp = intervals[i]; 
            }
                
        }
        ans.push_back(temp);
        return ans;
        
    }
};