class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int before = nums[0];
        int after = nums[0];
        do {
            before = nums[before];
            after = nums[nums[after]];
        } while(after != before);
        before = nums[0];
        while(before != after) {
            before = nums[before];
            after = nums[after];
        }
        return after;
    }
};
