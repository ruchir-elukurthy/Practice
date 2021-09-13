class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        int len = coins.size();
        vector<int> result(amount+1,amount+1);
        result[0] = 0;
        for(int j = 0; j < len; ++j) {
            for(int i = 1; i < amount+1; ++i) {
                if(i - coins[j] >= 0) {
                    result[i] = min(result[i], 1 + result[i - coins[j]]);
                }
            }
        }
        if(result[amount] != amount+1)
            return result[amount];
        return -1;
    }
};
