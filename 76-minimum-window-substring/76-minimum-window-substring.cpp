class Solution {
public:
    string minWindow(string s, string t) {
        map<char,int>m;
        for(int i=0;i<t.size();i++)
            m[t[i]]++;
        int i=0,j=0,n=s.size(),c=m.size(),ma=INT_MAX,ind1=0,ind2=0;
        while(j<n)
        {
		
            if(m.find(s[j])!=m.end())
            {
                m[s[j]]--;
                if(m[s[j]]==0)
                    c--;
            }
		
             while(c==0)
             {
                 if(m.find(s[i])!=m.end())
                 {
				 
                     ma=min(ma,j-i+1);
                     if(ma==j-i+1)
                           ind1=i,ind2=j;
                      m[s[i]]++;
                         if(m[s[i]]==1)
                             c++;
                 }
                i++;
            }
            j++;
        }
 
        string st;

        if(ma==INT_MAX)
            return st;
        for(int i=ind1;i<=ind2;i++)
            st+=s[i];
        return st;
    }
};