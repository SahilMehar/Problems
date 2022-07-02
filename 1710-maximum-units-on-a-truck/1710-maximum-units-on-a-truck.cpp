class Solution {
public:
    bool static myCmp(vector<int> v1, vector<int> v2)
    {
        return v1[1] > v2[1];
    }
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) 
    {
        sort(boxTypes.begin(), boxTypes.end(), myCmp);
        int i = 0, ans = 0;
        while(truckSize > 0 && i < boxTypes.size())
        {
           if(boxTypes[i][0] <= truckSize)
           {
               truckSize -= boxTypes[i][0];
               ans += boxTypes[i][0]*boxTypes[i][1];
           }
            
           else
           {
               int temp = truckSize;
                truckSize -= temp; // here truckSize = 0 
                ans += temp * boxTypes[i][1];
           }
            
           i++;
        }
        return ans; 
        
    }
};