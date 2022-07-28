class Solution {
public:
    bool isAnagram(string s, string t) 
    {
        unordered_map<char,int> mp, mp1;
        for(int i = 0; i < s.size(); i++)
            mp[s[i]]++;
        for(int i = 0; i < t.size(); i++)
            mp1[t[i]]++;
        if(mp == mp1)
            return true;
        return false;
    }
};