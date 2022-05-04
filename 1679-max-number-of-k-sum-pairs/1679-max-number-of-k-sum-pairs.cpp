class Solution {
public:
    int maxOperations(vector<int>& nums, int k) 
    {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int l = 0, r = n-1, count = 0;
        while(l < r)
        {
            if(nums[l] + nums[r] == k)
            {
                count++;
                l++, r--;
            }
            else if(nums[l] + nums[r] < k)
                l++;
            else
                r--;
        }
        return count;
    }
};