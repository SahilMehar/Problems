class Solution {
public:
    
    int romanToInt(string s) 
    {
        int n = s.size();
        vector<int> temp(n) ;
        for(int i = 0; i < s.length(); i++)
        {
            if(s[i] == 'I')
                temp[i] = 1;
            if(s[i] == 'V')
                temp[i] = 5;
            if(s[i] == 'X')
                temp[i] = 10;
            if(s[i] == 'L')
                temp[i] = 50;
            if(s[i] == 'C')
                temp[i] = 100;
            if(s[i] == 'D')
                temp[i] = 500;
            if(s[i] == 'M')
                temp[i] = 1000;
            if(s[i] == 'I' && s[i+1] == 'V')
            {
                temp[i] = 4;
                i++;
            }
            if(s[i] == 'I' && s[i+1] == 'X')
            {
                temp[i] = 9;
                i++;
            }
            if(s[i] == 'X' && s[i+1] == 'L')
            {
                temp[i] = 40;
                i++;
            }
            if(s[i] == 'X' && s[i+1] == 'C')
            {
                temp[i] = 90;
                i++;
            }
            if(s[i] == 'C' && s[i+1] == 'D')
            {
                temp[i] = 400;
                i++;
            }
            if(s[i] == 'C' && s[i+1] == 'M')
            {
                temp[i] = 900;
                i++;
            }
            
                
        }
        int sum = 0;
        for(int i = 0; i < temp.size(); i++)
        {
            sum  += temp[i];
        }
        return sum;
        
    }
};
/*
INPUT:MCMXCIV 
OUTPUT:1994
*/
