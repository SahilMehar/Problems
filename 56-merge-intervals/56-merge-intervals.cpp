class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& in) 
    {
        sort(in.begin(), in.end());
        vector<vector<int>> res;
        vector<int> v(2,0);
        v[0] = in[0][0];
        v[1] = in[0][1];
        int n = in.size();
        for(int i = 0; i < n; i++)
        {
            if(in[i][0] <= v[1])
                v[1] = max(v[1], in[i][1]);
            else
            {
                res.push_back(v);
                v = in[i];
            }
                
        }
        res.push_back(v);
        return res;
    }
};





