class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int sum = -1;
        int length = nums.size();
        vector<vector<int>> result;
        sort(nums.begin(), nums.end());
        if(length <= 2)
            return result;
        for(int i = 0; i< length; ++i){
            if(i != 0 && nums[i] == nums[i-1]) continue;
            for(int j = i+1; j < length; ++j) {
                if(j != i+1 && nums[j] == nums[j-1]) continue;
                for(int k = j+1; k < length; ++k) {
                    if (k != j+1 && nums[k] == nums[k - 1]) continue;
                    sum = nums[i] + nums[j] + nums[k];
                    if(sum == 0)
                        result.push_back({nums[i], nums[j], nums[k]});
                }
            }
        }
        return result;
    }
        
};
