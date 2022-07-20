class Solution {
public:
    bool check(string first, string s)
    {
        int j = 0;
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] == first[j])j++;
            if(j == first.size())
                return true;
        }
        return false;
    }
    int numMatchingSubseq(string s, vector<string>& words) 
    {
        int ans = 0;
        unordered_map<string,int>mp;
        for(int i = 0; i < words.size(); i++)
            mp[words[i]]++;
        for(auto it : mp)
        {
            if(check(it.first, s) == true)
                ans += it.second;
        }
        return ans;
    }
};
