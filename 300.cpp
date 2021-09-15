class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int max_length = INT_MIN, start = 0, temp_len = 1;
        int len = nums.size();
        if(len == 1)
            return 1;
        vector<int> LIS (len,1);
        for(int i = len-2; i >= 0; --i) {
            for(int j = i+1; j < len; ++j) {
                if(nums[j] > nums[i])
                    LIS[i] = max(LIS[i],1+LIS[j]);
            }
        }
        for(int i = 0; i < len; ++i) {
            cout<<LIS[i]<<" ";
            max_length = max(max_length, LIS[i]); 
        }
        return max_length;
    }
};
