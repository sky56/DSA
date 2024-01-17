int maxProfit(vector<int>& prices) {
    int currMin = prices[0];
    int profit = 0;

    for (int i = 1; i < prices.size(); i++) {
        profit = max(profit, prices[i] - currMin);
        currMin = min(currMin, prices[i]);
    }

    return profit;
}
