class Solution {
public:
    bool validMountainArray(vector<int>& arr) 
    {
        if(arr.size() < 3)
            return false;
        int i = 0;
        if(arr[i] < arr[i+1])
        {    
            while(i < (arr.size()-1) && arr[i] < arr[i+1])
            {
                i++;
            }
            if(i == (arr.size()-1)) return false;
            while(i < (arr.size()-1) && arr[i] > arr[i+1])
            {
                i++;
            }
        }
        else return false;
        if(i == (arr.size()-1))
           return true;
        return false;
    }
};