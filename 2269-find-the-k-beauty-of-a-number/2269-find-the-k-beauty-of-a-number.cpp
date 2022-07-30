class Solution {
public:
    int divisorSubstrings(int num, int k) 
    {
        int count = 0;
        string s = to_string(num);
        string str = "";
        int i = 0, j = 0, n = s.size();
        while(j < n)
        {
            str += s[j];
            if(j-i+1 < k)
                j++;
            else if(j-i+1 == k)
            {
                int n = stoi(str);
                if(n != 0 && num%n == 0)
                    count++;
                str.erase(0,1);
                i++, j++;
            }
        }
        return count;
    }
};
