class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int column = matrix[0].size();
        int top = 0, bottom = row-1, left = 0, right = column-1;
        int dir = 0, i =0;
        vector<int> result;
        while(top <= bottom && left <= right) {
            if(dir == 0) {
                for(i = left; i <= right; i++) {
                    result.push_back(matrix[top][i]);
                }
                ++dir;
                ++top;
            }
            if(dir == 1) {
                for(i = top; i <= bottom; i++) {
                    result.push_back(matrix[i][right]);
                }
                ++dir;
                --right;
            }
            if(dir == 2) {
                for(i = right; i >= left; i--) {
                    result.push_back(matrix[bottom][i]);
                }  
                ++dir;
                --bottom;
            }
            if(dir == 3) {
                for(i = bottom; i >= top; i--) {
                    result.push_back(matrix[i][bottom]);
                }
                dir = 0;
                ++left; 
            }
        }
        return result;
        
    }
};
