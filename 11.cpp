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


//Improved version:

class Solution {
public:
    int maxArea(vector<int>& height) {
        int height_length = height.size();
        if(height_length <= 1)
            return 0;
        int left_pointer = 0, right_pointer = height_length-1, minimum = 0;
        int max_area = 0, temp_area = 0, diff = 0;
        while(left_pointer < right_pointer) {
            minimum = min(height[left_pointer],height[right_pointer]);
            diff = right_pointer - left_pointer;            
            temp_area = minimum * diff;
            if(temp_area > max_area)
                max_area = temp_area;
            if(height[left_pointer] < height[right_pointer])
                ++left_pointer;
            else
                --right_pointer;   
        }
        return max_area;
    }
};
