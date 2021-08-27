class Solution {
private: 
    vector<vector<int>> result;
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> temp;
        appendSubsets(temp,nums,0);
        return result;
    }
    
    void appendSubsets(vector<int> &temp, vector<int> & nums, int index) {
        result.push_back(temp);
        for(int i = index; i< nums.size(); ++i) {
            temp.push_back(nums[i]);
            appendSubsets(temp, nums, i+1);
            temp.pop_back();
        }
    }
};
