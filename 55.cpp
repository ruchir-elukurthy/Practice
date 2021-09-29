class Solution {
public:
    bool canJump(vector<int>& nums) {
        int len = nums.size();
        int last_possible_position = len-1;
        for(int i = len-1; i >= 0; --i) {
            if(i + nums[i] >= last_possible_position)
                last_possible_position = i;
        }
        return last_possible_position == 0;
    }
};
