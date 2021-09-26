class Solution {
public:
    int characterReplacement(string s, int k) {
        int left = 0, right = 0;
        int len = s.size();
        vector<int> char_count (26,0);
        int max_len = 0, max_count = 0;
        for(right = 0; right < len; ++right) {
            int current = ++char_count[s[right] - 'A'];
            max_count = max(current, max_count);
            while(right - left + 1 - max_count > k) {
                char_count[s[left] - 'A']--;
                left++;
            }
            max_len = max(max_len, right-left+1);
        }
        return max_len;
    }
};
