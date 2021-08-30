class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int left = 1, right = 1;
        int maximum = INT_MIN, len = nums.size();
        for(int i = 0; i < len; ++i) {
            left *= nums[i];
            right *= nums[len-i-1];
            maximum = max(maximum,max(left,right));
            if(left == 0) left = 1;
            if(right == 0) right = 1;
        }
        return maximum;
    }
};
