class Solution {
    public:
//     struct
//     {
//         mycmp operator()(pair<int,char> a, pair<int,char> b)
//         {
//             if(a )
//         }
        
//     };
    string frequencySort(string s) 
    {
        string ans = "";
        unordered_map<char,int> mp;
        for(int i = 0 ;i < s.size(); i++)
            mp[s[i]]++;
        priority_queue<pair<int,char>> pq;
        for(auto x : mp)
        {
            pq.push({x.second, x.first}); 
        }
        
        while(pq.empty() == false)
        {
            int n = pq.top().first;
            while(n--)
                ans += pq.top().second;
            pq.pop();
        }   
        return ans;

    }
};
