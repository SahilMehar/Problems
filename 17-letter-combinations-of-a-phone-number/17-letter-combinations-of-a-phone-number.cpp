class Solution {
public:
    void solve(vector<string> &v, string ans, int ind, string &digits,unordered_map<int,string> &mp)
    {
        if(ind >= digits.size())
        {
            v.push_back(ans);
            return ;
        }
        
        int tmp = digits[ind]-'0';
        string m = mp[tmp];
        // cout << m[0] << " ";
        for(int i = 0; i < m.size(); i++)
        {
            // cout << m[i] << " ";
            ans.push_back(m[i]);
            solve(v,ans,ind+1,digits,mp);
            ans.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) 
    {
        unordered_map<int,string> mp;
        mp[2] = "abc";
        mp[3] = "def";
        mp[4] = "ghi";
        mp[5] = "jkl";
        mp[6] = "mno";
        mp[7] = "pqrs";
        mp[8] = "tuv";
        mp[9] = "wxyz";
        string ans = "";
        vector<string> v;
        if(digits.size() == 0)
            return v;
        solve(v,ans,0,digits,mp);
        return v;
    }
};