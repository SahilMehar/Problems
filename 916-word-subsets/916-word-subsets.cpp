class Solution {
public:
    vector<string> wordSubsets(vector<string>& s, vector<string>& t) 
    {
        vector<string> ans;
        unordered_map<char,int> mp1;
        vector<int> freq(26,0);
        for(int i = 0; i < t.size(); i++)
        {
            vector<int> temp(26,0);
            for(int j = 0; j < t[i].size(); j++)
            {
                temp[t[i][j]-'a']++;
                freq[t[i][j] -'a'] = max(temp[t[i][j]-'a'], freq[t[i][j] -'a']);
            }
            
        }
        
        for(int i = 0; i < s.size(); i++)
        {
            bool flag = 0;
            vector<int> temp(26,0);
            for(int j = 0; j < s[i].size(); j++)
            {
                temp[s[i][j]-'a']++;
            }
            cout << "\n";
            for(int k = 0; k < 26; k++)
            {
                if(freq[k] > temp[k])
                    flag = 1;
           
            }
            if(flag == 0)
                ans.push_back(s[i]);
            
        }
        return ans;
    }
};


