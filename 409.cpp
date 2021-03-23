class Solution {
public:
    int longestPalindrome(string s) {
        int sum = 0, flag = 0;
        unordered_map<char, int> mp;
        for(auto c : s)
            mp[c]++;
        for(auto i: mp) {
            if(i.second % 2 == 1) {
                sum += i.second-1;
                flag = 1;
            }
            if(i.second % 2 == 0)
                sum += i.second;
        }
        if(flag == 1)
            ++sum;
        return sum;
    }
};
