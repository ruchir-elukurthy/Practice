class Solution {
    private:
        vector<vector<int>> result;
        unordered_map<int,int> seen;
        vector<int> perms;
        int len;
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        len = nums.size();
        for(int i = 0; i < len; ++i) {
            if(seen.find(nums[i]) == seen.end())
                seen.insert({nums[i],0});
            ++seen[nums[i]];
        }
        permute();
        return result;
    }
    
    void permute() {
        if(len == perms.size()) {
            result.push_back(perms);
        }
        for(auto it = seen.begin(); it != seen.end(); it++) {
            if(it->second != 0) {
                perms.insert(perms.begin(), it->first);
                --it->second;
                permute();
                ++it->second;
                perms.erase(perms.begin());
            }
        }
    }
};
