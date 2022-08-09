class Solution {
public:
    
    int solve(string &s, string &t,vector<vector<int>> &dp, int m, int n)
    {
        if(m == 0 || n == 0)
            return 0;
        if(dp[m-1][n-1] != -1)
            return dp[m-1][n-1];
        if(s[m-1] == t[n-1])
            return dp[m-1][n-1] = 1+solve(s,t,dp,m-1,n-1);
        return dp[m-1][n-1] = max(solve(s,t,dp,m-1,n), solve(s,t,dp,m,n-1));
        
    }
    
    int longestPalindromeSubseq(string s) 
    {
        
        int n = s.size();
        vector<vector<int>> dp(n,vector<int>(n,-1));
        string t = s;
        reverse(t.begin(), t.end());
        return solve(s,t,dp,n,n);
    }
};