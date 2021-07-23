class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int len = strs.size();
        string curr_strs = "", common_prefix = strs[0];
        for(int i = 1; i < len; ++i) {
            curr_strs = strs[i];
            common_prefix = common_prefix_check(common_prefix, curr_strs);
        }
        return common_prefix;
    }
    
    string common_prefix_check(string compare_from, string compare_to) {
        int len = compare_from.size() < compare_to.size() ? compare_from.size() : compare_to.size();
        string common = "";
        for(int i = 0; i < len; ++i) {
            if(compare_from[i] == compare_to[i]) {
                common.push_back(compare_from[i]);
            }
            else
                return common;
        }
        return common;
    }
};
