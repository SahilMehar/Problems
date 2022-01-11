class Solution {
public:
    int countGoodSubstrings(string s) 
    {

        string test = "";
        bool flag = 0;
        int count = 0 , n = s.length();
        if(n < 3)
            return 0;
        for(int i = 0 ; i < n - 3 + 1; i++)
        {
            flag = 0;
            for(int j = 3; j > 0; j--)
            {
                test[j-1] = s[i+j-1];
            }
            if(test[0] == test[1] || test[0] == test[2] || test[1] == test[2])
                flag = 1;
            if(flag == 0) count++;
            
        }
        return count;
    }
};
