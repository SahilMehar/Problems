class Solution {
public:
    int minimumBuckets(string street) 
    {
        int ans = 0;
        int n = street.size();
        for(int i = 0; i < n; i++)
        {
            if(street[i] == 'H')
            {
                if(i < (n-1) && street[i+1] == '.')       
                {
                    ans++;
                    i = i+2;
                }
                else if(i > 0 && street[i-1] == '.')
                {
                    ans++;
                }
                else return -1;
                      
            }

        }
        return ans;
    }
};