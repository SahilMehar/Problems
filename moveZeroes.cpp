class Solution {
public:
    void moveZeroes(vector<int>& nums) 
    {
        int i = 0,count = 0;
        while(i < nums.size())
        {
            if(nums[i] == 0)
            {
                nums.erase(nums.begin() + i);
                count++;
            }
                
            else
                i++;
        }
        while(count != 0)
        {
            nums.push_back(0);
            count--;
        }
        for(int i = 0 ;i < nums.size(); i++)
            cout << nums[i];
        
    }
};
//INPUT: 0,1,2,3,0,2
//OUTPUT: 1,2,3,2,0,0
//TIME COMPLEXITY: O(n)
//SPACE COMPLEXITY: O(1)
