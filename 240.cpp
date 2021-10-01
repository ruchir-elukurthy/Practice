class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows = matrix.size(), columns = matrix[0].size();
        int curr_row = 0, curr_column = columns-1;
        while(curr_row < rows && curr_column >= 0) {
            if(matrix[curr_row][curr_column] == target)
                return true;
            else if(matrix[curr_row][curr_column] < target)
                ++curr_row;
            else
                --curr_column;
        }
        return false;
    }
};
