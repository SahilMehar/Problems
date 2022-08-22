class Solution {
public:
    int removeDuplicates(vector<int>& nums) 
    {
        int n = nums.size();
        unordered_map<int,int> mp;
        for(int i = 0; i < n; i++)
            mp[nums[i]]++;
        int ans = 0;
        nums.clear();
        for(auto x : mp)
        {
            int sum = 0, temp = 0;
            sum += x.second;
            temp = sum;
            if(x.second > 2)
            {
                sum = sum - (x.second-2);
                temp = sum;
                while(sum != 0)
                {
                    nums.push_back(x.first);
                    sum--;
                }
                    
            }
            else
            {
                while(sum != 0)
                {
                    nums.push_back(x.first);
                    sum--;
                }
            }
            ans += temp;
                
        }
        sort(nums.begin(), nums.end());
        return ans;
    }
};