class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) 
    {
        int n = nums.size();
        int i = 0, j = 0, mini = INT_MAX;
        long long sum = 0;
        while(j < n)
        {
            sum += nums[j];
            if(sum < target)
            {
                j++; 
                continue;
            }
                
            while(i <= j && sum >= target)
            {
                sum -= nums[i];
                int mn = j-i+1;
                mini = min(mini, mn);
                i++;
                    
            }
            j++;
        
            
        }
        if(mini == INT_MAX) return 0;
        else return mini;

    }
};