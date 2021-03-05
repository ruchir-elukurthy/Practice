class Solution {
public:
    bool isIsomorphic(string s, string t) {
        //size of strings different -> false
        //replace the letter with the same letter in all cases.
        int sLength = s.size(), tLength = t.size();
        unordered_map<char,char> myMap;
        if(sLength != tLength)
            return false;
        myMap.insert({s[0],t[0]});
        for(int i = 0; i<sLength; ++i) {
            if(myMap.find(s[i]) != myMap.end()) {
                if(myMap[s[i]] != t[i])
                    return false;
            }
            else {
                myMap[s[i]] = t[i];
            }
        }
        return true;
    }
};
