class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> repeated_values;
        int len = nums.size();
        for(int i = 0; i < len; ++i) {
            int temp = abs(nums[i])-1;
            if(nums[temp] < 0) {
                repeated_values.push_back(abs(nums[i]));
            }
            else
                nums[temp] *= -1;
        }
        return repeated_values;
    }
};
