class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        //If length of string = 0, returning 0.
        /*a->1
          b->1
          c->1
          max= 3
        */
        int maxi = INT_MIN;
        int windowLeft = 0;
        int length = s.size();
        if(length == 0)
            return 0;
        unordered_map<char,int> myMap;
        for(int windowRight = 0; windowRight<length; ++windowRight) {
            ++myMap[s[windowRight]];
            while(myMap[s[windowRight]] > 1) {
                myMap[s[windowLeft]]--;
                windowLeft++;
            }
            maxi = max(maxi,windowRight - windowLeft + 1);
        }
        return maxi;
     }
}
