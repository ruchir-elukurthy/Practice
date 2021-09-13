class Solution {
private:
    int len;
public:
    int rob(vector<int>& nums) {
        len = nums.size();
        if(len == 1)
            return nums[0];
        int start_zero_max = robs(nums,0,len-1);
        int start_one_max = robs(nums,1,len);
        return start_zero_max > start_one_max ? start_zero_max : start_one_max;
    }
    
    int robs(vector<int> num, int start, int end) {
        int rob1 = 0, rob2 = 0;
        for(int i = start; i < end; ++i) {
            int newRob = max(rob1 + num[i], rob2);
            rob1 = rob2;
            rob2 = newRob;
        }
        return rob2;
    }
};
