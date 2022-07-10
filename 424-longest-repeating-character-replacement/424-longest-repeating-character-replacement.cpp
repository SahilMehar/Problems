class Solution {
public:
    int maxv(unordered_map<char, int>& mp)
	{
		int mx=0;
		for(auto i: mp)
			mx = max(mx,i.second);
		return mx;
	}
    int characterReplacement(string s, int k) 
    {
        int i = 0, j = 0, mx = INT_MIN, max_freq = 0;
        int n = s.length();
        unordered_map<char,int> mp;
        while(j < n)
		{
			mp[s[j]]++;
			max_freq = maxv(mp);
			if(j-i+1-max_freq > k)
			{
				mp[s[i]]--;
				i++;
			}

			mx = max(mx, j-i+1);
			j++;
		}

		return mx;
            
    }
};
