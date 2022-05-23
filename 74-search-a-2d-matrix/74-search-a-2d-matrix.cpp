class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) 
    {
        vector<int> temp;
        int m = matrix.size(), n = matrix[0].size();
        for(int i = 0; i < m; i++)
        {
            for(int j = 0; j < n; j++)
            {
                temp.push_back(matrix[i][j]);
            }
        }
        int l = 0, r = temp.size()-1;
        while(l <= r)
        {
            int mid = l + (r-l)/2;
            if(temp[mid] == target)
                return true;
            else if(temp[mid] > target)
                r = mid - 1;
            else
                l = mid + 1;
                
        }
        return false;
    }
};