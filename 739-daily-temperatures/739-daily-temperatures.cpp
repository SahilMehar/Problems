class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& nums) 
    {
        int n = nums.size();
        vector<int> v(n, 0);
        stack<int> st;
        for(int i = n-1; i >= 0; i--)
        {
            while(!st.empty() && nums[st.top()] <= nums[i])
            {
                st.pop();
            }
            if(!st.empty())
                v[i] = st.top()-i;
            st.push(i);

        }
        return v; 
            
    }
};
