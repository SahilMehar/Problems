class Solution {
public:
    int scoreOfParentheses(string s) 
    {
        int count = 0;
        stack<int> st;
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] == '(')
                st.push(-1);
            else
            {
                if(st.top()== -1)
                {
                    st.pop();
                    st.push(1);
                }
                
                else
                {
                    int temp = 0;   
                    while(st.top() != -1)
                    {
                        temp += st.top();
                        st.pop();
                        
                    }
                    st.pop();
                    st.push(2*temp);
                }
            }
                
        }
        int temp = 0;
        if(st.size() > 0)
        {
            while(st.empty() != true)
            {
                temp += st.top();
                st.pop();
            }
        }
        return temp;
    }
};
