class Solution {
public:
    bool isValid(string s) {
        stack <char> brackets;
        int len = s.size();
        char peek_bracket;
        if(len == 1)
            return false;
        for(int i = 0; i < len; ++i) {
            if(s[i] == '(' || s[i] == '{' || s[i] == '[') {
                brackets.push(s[i]);
            }
            else {
                if(brackets.empty() == false) {
                    peek_bracket = brackets.top();
                    if(s[i] == ')' && peek_bracket != '(' || s[i] == '}' && peek_bracket != '{' || s[i] == ']' && peek_bracket != '[')
                        return false;
                    brackets.pop();
                }
                else
                    return false;
            }
        }
        if (brackets.empty() == false) {
            return false;
        }
        return true;
    }
};
