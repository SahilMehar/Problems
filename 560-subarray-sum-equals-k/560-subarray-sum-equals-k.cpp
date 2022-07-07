class Solution {
public:
    int subarraySum(vector<int>& arr, int k) 
    {
        int n = arr.size(), ans = 0;
        unordered_map<int,int> mp;
        int prefix[n];
        prefix[0] = arr[0];
        for(int i = 1; i < n; i++)
        {
            prefix[i] = prefix[i-1] + arr[i];
        }
        int i = 0;
        while(i < n)
        {
            if(prefix[i] == k)
                ans++;
            if(mp.find(prefix[i]-k) != mp.end())
            {
                ans += mp[prefix[i]-k];
            }
            mp[prefix[i]]++;
            i++;
        }
        return ans;
    }
};