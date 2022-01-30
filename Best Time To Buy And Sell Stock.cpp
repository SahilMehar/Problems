class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
        int ans = 0, diff =  0, curr = prices[0];
        int n = prices.size();
        for(int i = 1; i < n ; i++)
        {
           if(curr > prices[i])
               curr = prices[i];
            
            if(curr < prices[i])
            {
                diff = prices[i] - curr;
                if(diff > ans)
                    ans = diff;
            }   
        
        }
        return ans;
        
    }
};
/*Input: prices = [7,1,5,3,6,4]
Output: 5
Explanation: Buy on day 2 (price = 1) and sell on day 5 (price = 6), profit = 6-1 = 5.
Note that buying on day 2 and selling on day 1 is not allowed because you must buy before you sell.*/
