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

//Optimal
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result;
        int len = nums.size();
        sort(nums.begin(), nums.end());
        if(len <= 2)
            return result;
        for(int i = 0; i < len; ++i) {
            if((i == 0) || (nums[i] != nums[i-1])) {
                int low = i+1;
                int high = len-1;
                while(low < high) {
                    if(nums[i]+nums[low]+nums[high] == 0) {
                        result.push_back({nums[i],nums[low],nums[high]});
                        while(low < high && nums[low] == nums[low+1]) ++low;
                        while(low < high && nums[high] == nums[high-1]) --high;
                        ++low;
                        --high;
                    }
                    else if(nums[i]+nums[low]+nums[high] > 0)
                        --high;
                    else
                        ++low;
                }
            }
        }
        
        return result;
    }
};
