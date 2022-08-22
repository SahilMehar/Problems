class Solution {
public:
    vector<int> partitionLabels(string s) 
    {
        vector<int> v;
        int n = s.length();
        unordered_map<char,int> mp;
        for(int i = 0; i < n; i++)
            mp[s[i]] = i;
        
        int ind = 0, j = 0;
        for(int i = 0; i < n; i++)
        {
            ind = max(ind,mp[s[i]]);
            if(i == ind)
            {
                v.push_back(i-j+1);
                j = i+1;
            }
            
        }
        
        
        return v;
    }
};