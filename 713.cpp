class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int len = nums.size();
        int subarray_count = 0;
        int low = 0, product = 1;
        for(int high = 0; high < len; ++high) {
            product *= nums[high];
            while(product >= k && low <= high) {
                product /= nums[low];
                ++low;
            }
            subarray_count += high - low + 1;
        }
        return subarray_count;
    }
};
