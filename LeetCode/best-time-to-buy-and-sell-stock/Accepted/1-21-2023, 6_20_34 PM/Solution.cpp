// https://leetcode.com/problems/best-time-to-buy-and-sell-stock

class Solution 
{
public:
    int maxProfit(vector<int>& prices) 
    {
        int minProfit = prices[0], maxProfit = 0;
        vector<int>::const_iterator iter;

        for (iter = prices.begin(); iter != prices.end(); iter++)
        {
            if (*iter < minProfit)
                minProfit = *iter;
            else if (*iter - minProfit > maxProfit)
                maxProfit = *iter - minProfit;
        }
        return maxProfit;
    }
};