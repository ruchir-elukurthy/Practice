class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy = prices[0], profit = 0;
        int len = prices.size();
        if(len <= 1)
            return 0;
        for(int i = 1; i< len; ++i) {
            if(prices[i] < buy)
                buy = prices[i];
            else {
                profit = max(profit, prices[i]-buy);
            }
        }
        return profit;    
    }
};
