class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) 
    {
        int n = nums.size();
        stack<int> s;
        vector<int> v(n,-1);
        for(int i = n-1; i >= 0; i--)
            s.push(nums[i]);
        for(int i = n-1; i >= 0; i--)
        {
            while(s.empty() == false && s.top() <= nums[i])
                s.pop();
            if(s.empty() == false)
                v[i] = s.top();
            s.push(nums[i]);
            
        }
        return v;
    }
};
