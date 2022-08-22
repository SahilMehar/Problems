class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& in, vector<int>& nin) 
    {
        vector<vector<int>> res;
        int n = in.size();
        for(int i = 0; i < n; i++)
        {
            if(in[i][1] < nin[0])
                res.push_back(in[i]);
            
            else if(in[i][0] > nin[1])
            {
                res.push_back(nin);
                nin = in[i];
            }
            else if(in[i][1] >= nin[0] || in[i][0] <= nin[1])
            {
                nin[0] = min(in[i][0], nin[0]);
                nin[1] = max(in[i][1], nin[1]);
                
            }
            
        }
        res.push_back(nin);
        return res;
    }
};