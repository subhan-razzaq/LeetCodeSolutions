class Solution {
public:
    int maxProfit(vector<int>& prices) {
    int currentProfit = 0;
    int currentPrice = prices[0];
    for (int i = 1; i < prices.size(); i++)
    {
        if (prices[i] - currentPrice > currentProfit)
        {
            currentProfit = prices[i] - currentPrice;
        }
        if (prices[i] < currentPrice)
        {
            currentPrice = prices[i];
        }
    
    } 
    return currentProfit;
    }
};