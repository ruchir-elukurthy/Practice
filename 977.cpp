class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int len = nums.size();
        int minimum = INT_MAX;
        int min_index = INT_MAX;
        vector<int> result (len,0);
        for(int i = 0; i< len; ++i) {
            if(abs(nums[i]) < minimum) {
                minimum = abs(nums[i]);
                min_index = i;
            }
        }
        cout<<min_index;
        result[0] = nums[min_index] *nums[min_index]; 
        int index = 1;
        int i = min_index-1, j = min_index+1;
        while(i >= 0 && j < len) {
            if(abs(nums[i]) < abs(nums[j])) {
                result[index] = nums[i]*nums[i];
                --i;
            }
            else {
                result[index] = nums[j]*nums[j];
                ++j;
            }
            ++index;
        }
        if(i < 0) {
            while(j < len) {
                result[index] = nums[j]*nums[j];
                ++index;
                ++j;
            }
        }
        else {
            while(i >= 0) {
                result[index] = nums[i]*nums[i];
                --i;
                ++index;
            }
        }
        return result;
    }
};
