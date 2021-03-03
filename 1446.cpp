class Solution {
public:
    int maxPower(string s) {
        int tempCount = 0, maxCount = 0;
        char letter = s[0];
        for(int i=0;i<s.size();++i) {
            if(s[i] == letter)
                ++tempCount;
            else {
                letter = s[i];
                tempCount = 1;
            }
            if(tempCount > maxCount)
                maxCount = tempCount;    
        }
        return maxCount;
    }
};
