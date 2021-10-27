class Solution {
public:
    void sortColors(vector<int>& nums) {
        int len = nums.size();
        //[2,0,2,1,1,0]
        int low = 0, mid = 0, high = len-1;
        while(mid <= high) {
            if(nums[mid] == 2) {
                swap(nums[mid],nums[high]);
                --high;
            }
            else if(nums[mid] == 0) {
                swap(nums[mid],nums[low]);
                ++low; ++mid;
            }
            else {
                ++mid;
            }
        }
    }
};
