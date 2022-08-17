class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words)
    {
        unordered_map<string, int> ump;
        
        string s[26]={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        for(int i = 0; i < words.size(); i++)
        {
            string str = "";
            int n = words[i].length();
            for(int j = 0; j < n; j++)
            {
                str += s[words[i][j]-'a'];
            }
            
            ump[str]++;
            
        }
       
        return ump.size();
    }
};