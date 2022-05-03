class Solution {
public:
    string restoreString(string s, vector<int>& indices) 
    {
        vector<int> ans(indices.size());
        for(int i = 0; i < s.size(); i++)
        {
            ans[indices[i]] = s[i];
        }
        string temp = "";
        for(int i = 0; i < s.size(); i++)
        {
            temp += ans[i];
        }
        return temp;
    }
};