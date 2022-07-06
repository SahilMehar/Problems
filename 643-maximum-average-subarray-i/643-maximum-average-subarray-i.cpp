class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) 
    {
        int sum = 0, mx = INT_MIN, i = 0, j = 0;
        while(j < nums.size())
        {
            sum += nums[j];
            if(j-i+1 < k)
                j++;
            else if(j-i+1 == k)
            {
                mx = max(mx,sum);
                sum -= nums[i];
                i++, j++;
            }
        }
        
        return (double)mx/k;
    }
};