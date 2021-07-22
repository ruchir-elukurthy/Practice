class Solution {
public:
    int romanToInt(string s) {
        int len = s.size(), sum = 0;
        unordered_map<char,int> symbol_val = { {'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};
        for(int i = 0; i < len; ++i) {
            if(i == len - 1) {
                sum += symbol_val[s[i]];
            }
            else if((s[i] == 'I' || s[i] == 'X' || s[i] == 'C') && symbol_val[s[i]] < symbol_val[s[i+1]]) {
                sum += symbol_val[s[i+1]];
                sum -= symbol_val[s[i]];
                ++i;
            }
            else {
                sum += symbol_val[s[i]];
            }
        }
        return sum;
    }
};
