class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int len = s2.size();
        int len_s1 = s1.size();
        if(len_s1 > len)
            return false;
        vector<int> s1_count(26,0);
        vector<int> s2_count(26,0);
        for(int i = 0; i < len_s1; ++i) {
            s2_count[s2[i]-'a']++;
            s1_count[s1[i] - 'a']++;
        }
        
        for(int i = 0; i < len-len_s1; ++i) {
            if(match(s1_count, s2_count) == true)
                return true;
            s2_count[s2[i+len_s1]-'a']++;
            s2_count[s2[i]-'a']--;
        }
        return match(s1_count,s2_count);
    }
    
    bool match(vector<int> & s1_count, vector<int> & s2_count) {
        for(int i = 0; i < 26; ++i) {
            if(s2_count[i] != s1_count[i])
                return false;
        }
        return true;
    }
};
