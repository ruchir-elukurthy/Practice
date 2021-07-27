class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int missing_num = nums.size();
        int len = missing_num;
        for(int i = 0; i< len; ++i) {
            missing_num ^= i ^ nums[i];
        }
        return missing_num;
    }
};
