class Solution {
public:
//     Recursive
//     int lis(vector<int> nums, int n, int curr, int prev)
//     {
//         if(curr == n)
//             return 0;
//         int take = 0;
//         if(prev == -1 || nums[curr] > nums[prev])
//             take =  1 + lis(nums,n,curr+1,curr);
        
//             int not_take = 0 + lis(nums,n,curr+1,prev);
//         return max(take,not_take);
//     }
    int lis(vector<int> &nums, int n, int curr, int prev, vector<vector<int>> &dp)
    {
        if(curr == n)
            return 0;
        if(dp[curr][prev+1] != -1)
            return dp[curr][prev+1];
        int take = 0;
        if(prev == -1 || nums[curr] > nums[prev])
            take =  1 + lis(nums,n,curr+1,curr,dp);
        
        int not_take = 0 + lis(nums,n,curr+1,prev,dp);
        return dp[curr][prev+1] = max(take,not_take);
    }
    
    int lengthOfLIS(vector<int>& nums) 
    {
        int n = nums.size();
        vector<vector<int>>dp(n,vector<int>(n+1,-1));
        return lis(nums,n,0,-1,dp);
    }
};