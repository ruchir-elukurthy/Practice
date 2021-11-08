class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int length = cost.size();
        if(length == 1)
            return cost[0];
        else if(length == 2)
            return min(cost[0],cost[1]);
        int first = cost[0], second = cost[1];
        int min_cost = 0;
        for(int i = 2; i < length; ++i) {
            min_cost = cost[i] + min(first,second);
            first = second;
            second = min_cost;
        }
        return min(min_cost,first);
    }
};
