class Solution {
public:
    bool isHappy(int n) {
        //set<int> myset;
        //myset.insert(50); 
        unordered_set<int> myset;
        int num = n, sum= 0, rem = 0; 
        while(sum != 1) {
            sum = 0;
            while(num > 0) {
                rem = num % 10;
                num /= 10;
                sum += rem * rem;
            }
            num = sum;
            cout<<sum<<endl;
            if(myset.find(num)!=myset.end())
                return false;
            myset.insert(num);
        }
        return true;
    }
};
