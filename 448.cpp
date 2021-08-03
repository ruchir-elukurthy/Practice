class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int len = nums.size();
        vector<int> result;
        int temp = 0;
        for(int i= 0; i< len; ++i) {
            temp = abs(nums[i])-1;
            if(nums[temp] > 0)
                nums[temp] *= -1;
        }
        for(int i = 0; i< len; ++i) {
            if(nums[i] > 0)
                result.push_back(i+1);
        }
        return result;
    }
};
