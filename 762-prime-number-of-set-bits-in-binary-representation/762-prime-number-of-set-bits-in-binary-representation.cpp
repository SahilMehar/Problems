class Solution {
public:
    bool isPrime(int count)
    {
        bool ans = true;
        if(count == 0 || count == 1)
            return false;
        for(int i = 2; i < count; i++)
        {
            if(count%i == 0)
            {
                ans = false;
                break;
            }        
        }
        return ans;
    }
    int countPrimeSetBits(int left, int right) 
    {
        int ans = 0, count = 0;
        for(int i = left; i <= right; i++)
        {
            count = __builtin_popcount(i);
            if(isPrime(count) == true)
                ans++;
        }
        return ans;
    }
};