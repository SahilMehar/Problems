class Solution {
public:
    bool test(string s1, string s2)
    {
        unordered_map<int,int> mp,mp1;
        if(s1.size() != s2.size())
            return false;
        for(int i = 0; i < s1.size(); i++)
        {
            if(mp[s1[i]] != mp1[s2[i]])
                return false;
            mp[s1[i]] = i+1;
            mp1[s2[i]] = i+1;
        }
        return true;
    }
    vector<string> findAndReplacePattern(vector<string>& s, string pattern) 
    {
        vector<string> v;
        for(int i = 0; i < s.size(); i++)
        {
            if(test(s[i],pattern) == true)
                v.push_back(s[i]);
        }      
        return v;
        
    }
};