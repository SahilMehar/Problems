class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) 
    {
        int m = matrix.size();
        int n = matrix[0].size();
        vector<int> r;
        vector<int> c;
        for(int i = 0; i < m; i++)
        {
            for(int j = 0; j < n; j++)
            {
                if(matrix[i][j] == 0)
                {
                    r.push_back(i);
                    c.push_back(j);
                }
            }

        }
        
        for(int i = 0 ; i < r.size(); i++)
        {
            for(int j = 0; j < n; j++)
            {
                matrix[r[i]][j] = 0;
            }
        }
        
        for(int i = 0 ; i < c.size(); i++)
        {
            for(int j = 0; j < m; j++)
            {
                matrix[j][c[i]] = 0;
            }
        }
        
    }
};