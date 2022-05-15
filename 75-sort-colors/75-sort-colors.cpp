class Solution {
public:
    void sortColors(vector<int>& nums) 
    {
        int n = nums.size();
        int zer = 0, one = 0, two = 0;
        for(int i = 0; i < n; i++)
        {
            if(nums[i] == 0)
                zer++;
            if(nums[i] == 1)
                one++;
            if(nums[i] == 2)
                two++;
        }
        
        for(int i = 0; i < n; i++)
        {
            if(zer > 0)
            {
                nums[i] = 0;
                zer--;
            }
            else if(one > 0)
            {
                nums[i] = 1;
                one--;
            }
            else
            {
                nums[i] = 2;
            }
        }
        
        
          
    }
};