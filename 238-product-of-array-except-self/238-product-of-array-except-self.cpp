class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) 
    {
        int n = nums.size(), count = 0;
        vector<int> prefix(n);
        bool flag = 0;
        if(nums[0] != 0)
            prefix[0] = nums[0];
        else{
            prefix[0] = 1;
            flag = 1;
            count++;
        }
        
        for(int i = 1; i < n; i++)
        {
            if(nums[i] == 0)
            {
                prefix[i] = prefix[i-1]*1;
                flag = 1;
                count++;
                continue;
            }
            prefix[i] = prefix[i-1]*nums[i];
        }
        
        for(int i = 0; i < n; i++)
        {
            cout << prefix[i] << " ";
            if(flag == 1)
            {
                if(nums[i] == 0 && count == 1)
                    nums[i] = prefix[n-1];
                else
                    nums[i] = 0;
            }
            else
                nums[i] = prefix[n-1]/nums[i];
        }
            
        return nums;
    }
};