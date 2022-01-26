//Given an array of bird sightings where every element represents a bird type id, determine the id of the most frequently sighted type.
//If more than 1 type has been spotted that maximum amount, return the smallest of their ids.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    int a[n];
    for(int i=0; i<n; i++)
    {
        a[i] = 0;
    }
    for(int i=0; i<n; i++)
    {
        a[arr[i]]++;
    }
    int ans = 1;
    for(int i=2; i<n; i++)
    {
        if(a[i] > a[ans])
        {
            ans = i;
        }
    }
    cout << ans;
    
    return 0;
}
