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


//efficient

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int length_nums = nums.size();
        if(length_nums == 1)
            return nums;
        vector<int> output(length_nums, 1);
        int product = 1;
        int prev = nums[0];
        for(int i = 1; i < length_nums; ++i) {
            output[i] = prev;
            prev *= nums[i];
        }
        prev = nums[length_nums-1];
        for(int i = length_nums-2; i >= 0; --i) {
            output[i] *= prev;
            prev *= nums[i];
        }
        return output;
    }
};
