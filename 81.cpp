class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int len = nums.size();
        int left = 0, right = len-1, mid = 0;
        while(left <= right) {
            mid = (left+right)/2;
            if(nums[mid] == target)
                return true;
            if(left <= right && nums[left] == nums[mid] && nums[right] == nums[mid]) {
                while(left <= right && nums[left] == nums[mid] && nums[right] == nums[mid]) {
                    ++left;
                    --right;
                }
            }
            else {
                if(nums[left] <= nums[mid]) {
                    if(target >= nums[left] && target <= nums[mid]) {
                        right = mid-1;
                    }
                    else
                        left = mid+1;
                }
                else {
                    if(target >= nums[mid] && target <= nums[right]) {
                        left = mid+1;
                    }
                    else
                        right = mid-1;
                }
            }
        }
        return false;
    }
};
