class Solution {
public:
    int climbStairs(int n) {
        int first = 1, second = 1;
        if(n == 1)
            return first;
        int step = 2, climb = 0;
        while(step <= n) {
            climb = first + second;
            first = second;
            second = climb;
            ++step;
        }
        return climb;
    }
};
