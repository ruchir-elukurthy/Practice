class NumArray {
public:
    NumArray(vector<int>& nums) {
        int len = nums.size();
        for(int i = 0; i < len; ++i) {
            obj.push_back(nums[i]);
        }
    }
    
    int sumRange(int left, int right) {
        int sum = 0;
        while(left <= right) {
            sum += obj[left];
            ++left;
        }
        return sum;
    }
    
    private: 
        vector<int> obj;
};
