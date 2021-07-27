class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int len = nums.size();
        int left = 0, right = len-1;
        int i = 0;
        vector<int> product (len,1);
        while(i < len) {
            while(left != i) {
                product[i] *= nums[left];
                ++left;
            }
            while(right != i) {
                product[i] *= nums[right];
                --right;
            }
            ++i;
            left = 0;
            right = len-1;
        }
        return product;
    }
};
