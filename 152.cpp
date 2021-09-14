class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int temp_max = nums[0], temp_min = nums[0], curr_max = nums[0], hold = 0;
        int len = nums.size();
        for(int i = 1; i < len; ++i) {
            hold = temp_max; 
            temp_max = max(nums[i], nums[i]*temp_max);
            temp_max = max(temp_max, nums[i]* temp_min);
            temp_min = min(nums[i], nums[i]*temp_min);
            temp_min = min(temp_min, nums[i] * hold);
            cout<<temp_max<<" "<<temp_min<<endl;
            curr_max = max(curr_max, temp_max);
        }
        return curr_max;
        
    }
};
