class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int len = nums.size();
        sort(nums.begin(),nums.end());
        int sum = 0, diff_sum_target = 0, closest_sum = INT_MAX, smallest_diff = INT_MAX;
        for(int i = 0; i < len-2; ++i) {
            int left = i + 1;
            int right = len-1;
            while(left < right) {
                sum = nums[i] + nums[left] + nums[right];
                diff_sum_target = abs(sum - target);
                if(smallest_diff > diff_sum_target) {
                    smallest_diff = diff_sum_target;
                    closest_sum = sum;
                }
                if(sum < target)
                    left++;
                else
                    right--;    
            }
        }
        return closest_sum;
    }
};
