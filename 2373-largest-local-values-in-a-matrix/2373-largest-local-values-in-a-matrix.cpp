class Solution {
public:
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) 
    {
        int n = grid.size();
        int i,j;
        vector<vector<int>> v(n-2, vector<int> (n-2));
        for(int i = 1; i <= n-2; i++)
        {
            for(int j = 1; j <= n-2; j++)
            {
                int mx = 0;
                mx = max(mx, max(grid[i-1][j-1], max(grid[i-1][j], grid[i-1][j+1])));
                mx = max(mx, max(grid[i][j], max(grid[i][j-1], grid[i][j+1])));
                mx = max(mx, max(grid[i+1][j-1], max(grid[i+1][j], grid[i+1][j+1])));
                v[i-1][j-1] = mx;
            }
            
        }
        return v;
        
    }
};