class Solution {
public:
    int removeElement(vector<int>& nums, int val) 
    {
        int i = 0;
        while(i < nums.size())
        {
            if(nums[i] == val)
                nums.erase(nums.begin()+i);
            else
                i++;
        }
        //remove(nums.begin(), nums.end(), val);
        int n = nums.size();
        return n;
    }
};
//INPUT: [0,1,2,2,3,0,4,2], val = 2
//OUTPUT: 0,1,3,0,4
//Time Complexity: O(n);
//Space Complexity : O(1)
