class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) 
    {
        vector<int> temp = nums;
        int s = INT_MAX, e = INT_MIN;
        sort(temp.begin(), temp.end());
        if(temp == nums)
            return 0;
        for(int i = 0; i < temp.size(); i++)
        {
            if(temp[i] != nums[i])
            {
                s = min(s,i);
                e = max(e,i);
            }
        }
        return (e-s+1);
    }
};
