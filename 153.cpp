class Solution {
public:
    int findMin(vector<int>& nums) {
        int length = nums.size();
        int left = 0, right = length - 1, mid = 0;
        while(left < right) {
            mid = left+ (right-left)/2;
            if(nums[mid] > nums[right]) {
                left = mid + 1;
            }
            else
                right = mid;
        }
        return nums[left];
    }
};
