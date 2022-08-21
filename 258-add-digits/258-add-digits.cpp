class Solution {
public:
    int addDigits(int n) 
    {
        int count = 0;
        if(n == 0)
            return 0;
        while(count != 1)
        {
            int sum = 0, count = 0;
            while(n != 0)
            {
                sum += n%10;
                n = n/10;
                count++;
            }
            if(count == 1)
                return sum;
            else
                n = sum;
        }
        return 0;
    }
};