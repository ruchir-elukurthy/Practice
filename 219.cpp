class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int> nums_appear;
        for(int i = 0; i< nums.size(); ++i) {
            if(nums_appear.count(nums[i])) {
                if(abs(i - nums_appear[nums[i]]) <= k) {
                    return true;
                }
                else
                    nums_appear[nums[i]] = i;
            }
            else
                nums_appear.insert({nums[i],i});
        }
        return false;
    }
};
