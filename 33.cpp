class Solution {
public:
    int search(vector<int>& nums, int target) {
        int length = nums.size();
        int left = 0, right = length - 1, mid = 0;
        while(left < right) {
            mid = left + (right-left)/2;
            if(nums[mid] > nums[right]) {
                left = mid+1;
            }
            else {
                right = mid;
            }
        }
        
        int start = left;
        int end = length - 1;
        int midpoint = 0;
        if(target >= nums[start] && target <= nums[end]) {
            end = length-1;
        }
        else {
            end = start-1;
            start = 0;
        }
        while(start <= end) {
            int midpoint = start + (end-start)/2;
            if(nums[midpoint] == target)
                return midpoint;
            if(nums[midpoint] > target) {
                end = midpoint - 1;
            }
            else
                start = midpoint + 1;
        }
        return -1;
    }
};
