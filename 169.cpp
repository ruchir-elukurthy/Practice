class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0, curr = 0, len = nums.size();
        for(int i = 0; i< len; ++i) {
            if(count == 0)
                curr = nums[i];
            count += (curr == nums[i]) ? 1 : -1;
        }
        return curr;
    }
};
