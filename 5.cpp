class Solution { 
private: 
    int len;
public:
    string longestPalindrome(string s) {
        len = s.size();
        int max_length = 0, left = 0, right = 0;
        string result;
        for(int i = 0; i < len; ++i) {
            int len1 = checkPalindrome(s,i,i);
            int len2 = checkPalindrome(s,i,i+1);
            max_length = max(len2, len1);
            if(max_length > right-left) {
                left = i - (max_length-1)/2;
                right = i + max_length/2;
                cout<<left<<" "<<right<<endl;
            }
        }
        for(int i = left; i <= right; ++i) {
            result.push_back(s[i]);
        }
        return result;
    }
    
    int checkPalindrome(string &s, int left, int right) {
        if(len < right-left)
            return 0;
        while(left >= 0 && right < len && s[left] == s[right]) {
            --left;
            ++right;
        }
        return right-left-1;
    }
};
