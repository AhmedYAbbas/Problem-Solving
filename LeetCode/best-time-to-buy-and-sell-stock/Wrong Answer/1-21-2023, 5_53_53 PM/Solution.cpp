// https://leetcode.com/problems/best-time-to-buy-and-sell-stock

class Solution 
{
public:
    int maxProfit(vector<int>& prices) 
    {
        // int profit = 0;

        // vector<int>::const_iterator it1;
        // vector<int>::const_iterator it2;
        // for (it1 = prices.begin(); it1 != prices.end(); it1++)
        // {
        //     for (it2 = it1; it2 != prices.end(); it2++)
        //     {
        //         if (*it2 - *it1 > 0 && *it2 - *it1 >= profit)
        //             profit = *it2 - *it1;
        //     }
        // }
        // return profit;

        vector<int>::iterator minElement, maxElement; 
        int minIndex = 0, maxIndex = 0;

        minElement = min_element(prices.begin(), prices.end());
        maxElement = max_element(prices.begin(), prices.end());

        minIndex = find(prices.begin(), prices.end(), *minElement) - prices.begin();
        maxIndex = find(prices.begin(), prices.end(), *maxElement) - prices.begin();

        if (maxIndex < minIndex)
        {
            maxElement = max_element(minElement, prices.end());
            maxIndex = find(minElement, prices.end(), *maxElement) - prices.begin();
        }
        
        if (minIndex < maxIndex)
            return *maxElement - *minElement;

        return 0;
    }
};