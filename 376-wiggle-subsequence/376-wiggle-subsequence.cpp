class Solution {
public:
    int wiggleMaxLength(vector<int>& nums) 
    {
        int last = 0, now = 0, ans = 1;
        for(int i = 1; i < nums.size(); i++)
        {
            now = nums[i] - nums[i-1];
            if((now > 0 && last <= 0) || (now < 0 && last >= 0))
            {
                ans++;
                last = now;
            }
            
        }
        return ans;
    }
};