class Solution {
public:
    vector<string> letterCasePermutation(string s) {
        int len = s.size();
        findPermutation(s,s,0);
        return result;
    }
    void findPermutation (string s, string letters, int index) {
        result.push_back(letters);
        for(int i = index; i < s.size(); i++) {
            if(s[i]>=97 && s[i]<=122)
            {
                letters[i] = s[i]-32;
                findPermutation(s,letters,index+1);
                letters[i] = s[i];
            }
            else if(s[i]>=65 && s[i]<=90)
            { 
                letters[i] = s[i]+32;
                findPermutation(s,letters,index+1);
                letters[i] = s[i];
            }
        }
    }
    private: 
        vector<string> result;
};
