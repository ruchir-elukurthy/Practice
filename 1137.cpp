class Solution {
    /*
    base case:  n = 0: return 0
                n = 1: return 1
                n = 2: return 1
                
    other case: n = 3:  res(n-1) + res(n-2) + res(n-3);
    */
public:
    int tribonacci(int n) {
        if(n == 0)
            return 0;
        else if(n == 1 || n == 2)
            return 1;
        int find_tribonacci_value = 2;
        int first = 0, second = 1, third = 1;
        while(find_tribonacci_value < n) {
            int temp = third;
            third = first + second + third;
            first = second;
            second = temp;
            find_tribonacci_value++;
        }
        return third;
    }
};
