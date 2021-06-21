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


//2 pointer version, more optimal soln

class Solution {
public:
    //nums = [-4,-1,1,2] after sorting.
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int length = nums.size();
        int sum = 0, closest_sum = 0;
        int diff = 0, smallest_diff = INT_MAX;
        int left_pointer = 1, right_pointer = length-1;
        for(int i = 0; i < length; ++i) {
            left_pointer = i+1;
            right_pointer = length - 1;
            while(left_pointer < right_pointer) {
                sum = nums[i] + nums[left_pointer]+nums[right_pointer];
                if(sum == target)
                    return sum;
                diff = target - sum;                                    //4
                if(abs(diff) < abs(smallest_diff)) {                    
                    closest_sum = sum;                                  //-3
                    smallest_diff = diff;
                }
                if(sum > target)
                    --right_pointer;
                else
                    ++left_pointer;
            }
        }
        return closest_sum;
    }
};
