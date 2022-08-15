class Solution {
public:
    string intToRoman(int num) 
    {
        vector<int> v{1000,900,500,400,100,90,50,40,10,9,5,4,1};
        vector<string> s{"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
        string str = "";
        for(int i = 0; i < v.size(); i++)
        {
            while(num >= v[i])
            {
                num = num-v[i];
                str +=s[i];
            }
        }
        return str;
        
    }
};