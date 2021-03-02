class Solution {
public:
    int singleNumber(vector<int>& nums) {
        //if size of array is 1, the return the nums[0].
        //
        unordered_map<int,int> storeNumbers;
        
        for(int i = 0; i < nums.size(); ++i) {
            if(storeNumbers.count(nums[i]) == 0)
                storeNumbers.insert({ nums[i], 1 });
            else 
                storeNumbers[nums[i]] += 1;
        }
        for(auto i: storeNumbers)
            if(i.second==1) return i.first;
        return -1;
    }
};
