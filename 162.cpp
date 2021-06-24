class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int length = nums.size();
        int left = 0, right = length - 1, mid;
        while(left < right) {
            mid = left + (right-left)/2;
            if(nums[mid+1] > nums[mid]) {
                left = mid+1;
            }
            else
                right = mid;
        }
        return left;
    }
};
