class Solution {
public:
    int fib(int n) {
        int prev = 0, current = 1;
        if(n == 0)
            return prev;
        if(n == 1)
            return current;
        int i = 2;
        while(i <= n) {
            int temp = current;
            current += prev;
            prev = temp;
            ++i;
        }
        return current;
    }
};
