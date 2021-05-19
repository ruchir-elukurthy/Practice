class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack <char> s1;
        stack <char> t1;
        for(int i = 0; i< s.size(); ++i) {
            if(s[i] == '#') {
                if(s1.empty() == false)
                    s1.pop();
            }
            else
                s1.push(s[i]);
        }
        for(int j = 0; j< t.size(); ++j) {
            if(t[j] == '#') {
                if(t1.empty() == false)
                    t1.pop();
            }
            else
                t1.push(t[j]);
        }
        if(s1.size() != t1.size()) {
            return false;
        }
        while(s1.empty() != true) {
            if(s1.top() != t1.top())
                return false;
            s1.pop();
            t1.pop();
        }
        return true;
    }
};
