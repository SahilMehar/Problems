class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) 
    {
        unordered_map<int,int> mp;
        for(int i = 0; i < time.size(); i++)
        {
            time[i] = time[i]%60;
            mp[time[i]]++;
        }    
        long long ans = 0;
        for(auto x : mp)
        {
            if(x.first == 0 || x.first == 30)
            {
                if(x.second%2 == 0)
                    ans += ((x.second/2))*(x.second-1);
                else
                    ans += x.second * ((x.second-1)/2);
            }
           else if(x.first < 30 && mp.find(60-x.first) != mp.end())
                ans += x.second * mp[60-x.first];
        }
        return ans;
    }
};