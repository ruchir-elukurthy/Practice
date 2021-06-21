class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int length = nums.size();
        int sum = 0, closest_sum = 0;
        int diff = 0, smallest_diff = 10000;
        for(int i = 0; i< length; ++i) {
            for(int j = i+1 ; j< length; ++j) {
                for(int k = j+1; k < length; ++k) {
                    sum = nums[i]+nums[j]+nums[k];
                    if(sum == target) {
                        return sum;
                    }
                    else {
                        diff = target - sum;
                        if(abs(smallest_diff) > abs(diff)) {
                            closest_sum = sum;
                            smallest_diff = diff;
                        }
                    }
                }
            }
        }
        return closest_sum;  
    }
};
