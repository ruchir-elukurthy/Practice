class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int len = nums.size(), count = 1, max_count = 1;
        if(len == 0)
            return 0;
        for(int i = 1; i < len; ++i) {
            if (nums[i] != nums[i-1]) {
                if(nums[i] == nums[i-1]+1) {
                    ++count;
                }
                else {
                    max_count = max(max_count, count);
                    count = 1;
                }
            }
        }
        max_count = max(max_count, count);
        return max_count;
    }
};
