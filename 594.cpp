class Solution {
public:
    int findLHS(vector<int>& nums) {
        // max = 1, min = 0.
        // count = count of max + count of min.
        // max_size > count, then update max_size
        map<int, int> m;
        for(auto i : nums)
        {
            if(m.find(i) == m.end())
                m.insert(make_pair(i, 1));
            else
                m[i]++;
        }
        int max = 0, min = 0, max_size = -1, count = 0;
        for(int i = 0; i < nums.size(); ++i) {
            max = nums[i];
            if(m[max - 1] != 0) {
                count = m[max] + m[max-1];
            }
            if(max_size < count)
                max_size = count;
        }
        return max_size;
    }
};
