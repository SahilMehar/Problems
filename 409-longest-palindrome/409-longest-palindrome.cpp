class Solution {
public:
    int longestPalindrome(string s) 
    {
        string temp = s;
        reverse(s.begin(), s.end());
        
        if(temp == s)
            return s.size();
        
        int a[26] = {0}, A[26] = {0};
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] >= 'A' && s[i] <= 'Z')
                A[s[i] - 65]++;
            else
                a[s[i] - 97]++;
        }
        int ans = 0;
        bool flag = 0;
        for(int i = 0; i < 26; i++)
        {
            if(a[i] != 0 && a[i] % 2 == 0)
                ans += a[i];
            
            if(A[i] != 0 && A[i] % 2 == 0)
                ans += A[i];
        
            if(A[i] > 1 && A[i] % 2 != 0)
            {
                ans += A[i] - 1;
                flag = 1;
            }
            if(a[i] > 1 && a[i] % 2 != 0)
            {
                ans += a[i] - 1;
                flag = 1;
            }
            if(a[i] == 1 || A[i] == 1) 
                flag = 1;
            
            
        }
        if(flag == 1)
            return ans+1;
        else
            return ans;
        
        
    }
};