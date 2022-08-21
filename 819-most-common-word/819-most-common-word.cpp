class Solution {
public:
    string mostCommonWord(string p, vector<string>& b) 
    {
        string ans = "";
        int n = p.length();
        unordered_map<string,int> mp;
        
        
        for(int i = 0; i < n; )
        {
            string s = "";
            while(i < n && isalpha(p[i]))
                s.push_back(tolower(p[i++]));
            while(i < n && !isalpha(p[i]))
                i++;
            mp[s]++;
        }
        for(auto x : b)
            mp[x] = 0;
        int count = 0;
        for(auto x : mp)
        {
            if(x.second > count)
            {
                count = x.second;
                ans = x.first;
            }    
        }
        return ans;
    }
};