var maxProfit = function(prices) {
    let length = prices.length;
    if(length === 1)
        return 0;
    let profit = 0;
    for(let i = 1; i < length; ++i) {
        if(prices[i] > prices[i-1]) {
            profit += prices[i] - prices[i-1];
        }
    }
    return profit;
};
