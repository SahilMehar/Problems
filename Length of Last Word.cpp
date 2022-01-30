class Solution {
public:
    int lengthOfLastWord(string s) 
    {
        int n = s.size()-1, count = 0, ans = 0;
        int prev = 0;
        bool flag = false;
        while(prev <= n)
        {
            if(s[n] == ' ' && flag == true)
                break;
            if(s[n] != ' ')
            {
                count++;
                flag = true;
            }
            n--;
        }
           
        return (count);
    }
};
//INPUT: HELLO WORLD
//OUTPUT: 5
