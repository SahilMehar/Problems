class Solution {
public:
    int maxArea(int h, int w, vector<int>& horizontalCuts, vector<int>& verticalCuts) 
    {
        horizontalCuts.push_back(h);
        horizontalCuts.push_back(0);
        verticalCuts.push_back(w);
        verticalCuts.push_back(0);
        sort(horizontalCuts.begin(), horizontalCuts.end());
        sort(verticalCuts.begin(), verticalCuts.end());
        int diff1 = INT_MIN, diff2 = INT_MIN;
        for(int i = 0; i < verticalCuts.size()-1; i++)
        {
            diff1 = max(diff1, abs(verticalCuts[i]-verticalCuts[i+1]));
        }
        for(int i = 0; i < horizontalCuts.size()-1; i++)
        {
            diff2 = max(diff2, abs(horizontalCuts[i]-horizontalCuts[i+1]));
        }
        
        return ((long long)diff1*diff2)%1000000007;
    }
};