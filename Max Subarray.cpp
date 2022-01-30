class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        //Bro it's Kadane Algorithm
        int n = nums.size();
        int max_so_far = INT_MIN; int max_end_here = 0;
        for(int i = 0; i < n; i++)
        {
            max_end_here += nums[i];
            if(max_end_here > max_so_far)
                max_so_far = max_end_here;
            
            if(max_end_here < 0)
                max_end_here = 0;
        }
        return max_so_far;
        
    }
};
/*Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
Output: 6
Explanation: [4,-1,2,1] has the largest sum = 6.*/
