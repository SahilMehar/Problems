class Solution {
public:
    int searchInsert(vector<int>& nums, int target) 
    {
        int count = 0; bool flag = 0;
        for(int i = 0 ; i < nums.size(); i++)
        {
            if(nums[i] >= target)
            {
                return i;

            }
                
        }
        return nums.size();
    }
};
/*
INPUT: 1,3,4,5,7  target = 5
OUTPUT: 3
INPUT: 1,3,4,5,7 target = 2
OUTPUT: 1
*/
