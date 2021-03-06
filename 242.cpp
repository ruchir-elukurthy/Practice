class Solution {
public:
    bool isAnagram(string s, string t) {
        //anagram.
        //a->3, n->1,g->1,r->1,m->1.
        //nagaram
        //a->0, n->0,g->0,r->0,m->0
        unordered_map<char,int> myMap;
        int sLength = s.size(), tlength = t.size();
        for(int i = 0; i<sLength; ++i) {
            if(myMap.count(s[i]) == 0)
                myMap[s[i]] = 1;
            else
                myMap[s[i]] += 1;
        }
        for(int j = 0; j<tlength; ++j) {
            if(myMap.find(t[j]) != myMap.end()) {
                myMap[t[j]] -= 1;
            }
            else {
                return false;
            }
        }
        for (auto x : myMap) {  
            if(x.second != 0)
                return false;
        }
        return true;
    }
};
