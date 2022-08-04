class Solution {
public:
    void solve(string ans, vector<string>&v, int open, int close)
    {
        if(open == 0 && close == 0)
        {
            v.push_back(ans);
            return ;
        }
        if(open > 0)
        {
            ans.push_back('(');
            solve(ans,v,open-1,close);
            ans.pop_back();
        }
        if(close > 0)
        {
            if(open < close)
            {
                ans.push_back(')');
                solve(ans,v,open,close-1);
                ans.pop_back();
            }
        }
    }
    vector<string> generateParenthesis(int n) 
    {
        vector<string> v;
        solve("",v,n,n);
        return v;
    }
};