class Solution {
private:
    vector<vector<int>> result;
    int len;
public:
    vector<vector<int>> permute(vector<int>& nums) {
        len = nums.size();
        findPermute(nums,0);
        return result;
    }
    
    void findPermute(vector<int> & nums, int index) {
        if(index == len)
            result.push_back(nums);
        for(int i = index; i < len; ++i) {
            swap(nums[i],nums[index]);
            findPermute(nums,index+1);
            swap(nums[i],nums[index]);
        }
    }
};
