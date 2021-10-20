#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v{0,0,1,1,1,1,1,2,2,2,3};
    int i = 1;
    while(i < v.size())
    {
        if(v[i] == v[i-1])
        {
            v.erase(v.begin() + i);
        }
        else
        {
            i++;
        }
    }
    for(int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    return 0;

}
//OUTPUT: 0 1 2 3
//Time Complexity = O(n);
//Space Complexity = O(1)
