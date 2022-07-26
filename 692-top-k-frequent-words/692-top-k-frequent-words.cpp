class Solution {
public:
    struct mycmp
    {
        bool operator()(pair<int,string> a, pair<int,string> b)
        {
            if(a.first == b.first)
            {
                if(a.second > b.second)
                    return true;
                else
                    return false;
            }
            return a.first < b.first;
            
        }
    };
    vector<string> topKFrequent(vector<string>& words, int k) 
    {
        vector<string> v;
        map<string,int> mp;
        priority_queue<pair<int,string>, vector<pair<int,string>>, mycmp> pq;
        for(int i = 0; i < words.size(); i++)
            mp[words[i]]++;
        for(auto x : mp)
        {
            pq.push({x.second,x.first});
        }
        while(k > 0)
        {
            v.push_back(pq.top().second);
            pq.pop();
            k--;
        }
        return v;
    }
};