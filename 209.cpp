class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int left = 0, right = 0, length = nums.size();
        int subarray_size = 0, sum = 0, min_size = INT_MAX;
        for(right = 0; right < length; ++right) {
            sum += nums[right];
            while(sum >= target) {
                subarray_size = right - left + 1;
                min_size = min(subarray_size,min_size);
                subarray_size = 0;
                sum -= nums[left];
                ++left;
            }
        }
        if(min_size == INT_MAX)
            return 0;
        return min_size;
    }
};
