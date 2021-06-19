class Solution {
public:
    int maxArea(vector<int>& height) {
        int length = height.size();
        int minimum = 0;
        int block_area = 0;
        vector<int> area = {};
        int i = 0;
        for(i = 0; i < length-1; ++i) {
            for(int j = i+1; j < length; ++j) {
                minimum = min(height[i],height[j]);
                block_area = minimum * (j-i);
                area.push_back(block_area);
            }
        }
        int area_length = area.size();
        int maximum = 0;
        for(i = 0; i < area_length; ++i) {
            maximum = max(area[i], maximum);
        }
        return maximum;
    }
};
