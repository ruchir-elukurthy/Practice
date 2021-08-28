class Solution {
private: 
    vector<vector<int>> result;
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int> temp;
        appendSubsets(temp,nums,0);
        return result;
    }
    
     void appendSubsets(vector<int> &temp, vector<int> & nums, int index) {
        if (find(result.begin(), result.end(), temp) == result.end())
            result.push_back(temp);
        for(int i = index; i< nums.size(); ++i) {
            temp.push_back(nums[i]);
            appendSubsets(temp, nums, i+1);
            temp.pop_back();
        }
    }
};
