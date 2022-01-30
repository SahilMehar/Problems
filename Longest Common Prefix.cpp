class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) 
    {
        sort(strs.begin(), strs.end());
        string ans = "";
        bool flag = 0;
        for(int i = 0; i < strs[0].size(); i++)
        {
            for(int j = 1; j < strs.size(); j++)
            {
                if(strs[j][i] != strs[0][i])
                    return ans;
            }
            //if(flag == 1)
                ans += strs[0][i];
        }
        return ans;
            
    }
};
/*Input: strs = ["flower","flow","flight"]
Output: "fl"*/
