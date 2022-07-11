class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) 
    {
        if(k <= 1)
            return 0;
        int ans = 0, i = 0, j = 0, pr = 1;
        while(j < nums.size())
        {
            pr = pr * nums[j];
            while(pr >= k)
            {
                pr = pr/nums[i];
                i++;
            }
            ans += (j-i+1);
            j++;
        }
        return ans;
        
    }
};