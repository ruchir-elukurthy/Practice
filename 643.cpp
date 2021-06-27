class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int length = nums.size();
        if(length < k)
            return 0;
        double max_value = INT_MIN;
        int left = 0, right = k-1;
        int temp_left = 0, temp_sum = 0;
        while(temp_left <= right) {
            temp_sum += nums[temp_left];
            ++temp_left;
        }
        max_value = temp_sum;
        left = 0;
        for(right = k; right < length; ++right) {
            temp_sum += nums[right]-nums[left];
            max_value = max(temp_sum,max_value);
            ++left;
        }
        return max_value/k;
    }
    
    int max(int a, int b) {
        if(a < b)
            return b;
        return a;
    }
};
