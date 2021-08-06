class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max_sum = nums[0];
        int curr_sum = nums[0];
        int len = nums.size();
        for(int i = 1; i < len; ++i) {
            curr_sum = nums[i] + max(0,curr_sum);
            max_sum = max(curr_sum,max_sum);
        }
        return max_sum;
    }
};
