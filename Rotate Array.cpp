//Given an array, rotate the array to the right by k steps, where k is non-negative.
class Solution {
public:
    void rotate(vector<int>& nums, int k)  
    {
        int n = nums.size();
        int b[n];
        k = k % n;
        for(int i = 0; i < n; i++)
        {
            b[i] = nums[i];
        }
        
        for(int i = 0; i < n; i++)
        {
            if(i < k)
            {
                nums[i] = b[n + i - k];
            }
            else
            {
                nums[i] = b[i - k];
            }
        }
        
    }
};
/*Input: nums = [1,2,3,4,5,6,7], k = 3
Output: [5,6,7,1,2,3,4]*/
