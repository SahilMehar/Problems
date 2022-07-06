class Solution {
public:
    vector<int> findAnagrams(string s, string p) 
    {
        int n = s.length(), k = p.size();
        vector<int> real(26,0), store(26,0), ans;
        for(int i  = 0; i < k; i++)
            real[p[i]-'a']++;
        int i = 0, j = 0;
        while(j < n)
        {
            store[s[j]-'a']++;
            if(j-i+1 < k)
                j++;
            else if(j-i+1 == k)
            {
                if(store == real)
                    ans.push_back(i);
                store[s[i]-'a']--;
                i++, j++;
            }
        }
        return ans;
    }
};