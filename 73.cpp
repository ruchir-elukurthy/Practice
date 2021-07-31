class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        unordered_set <int> zeros_row;
        unordered_set <int> zeros_column;
        int rows = matrix.size();
        int column = matrix[0].size();
        for(int i = 0; i < rows; ++i) {
            for(int j = 0; j< column; ++j) {
                if(matrix[i][j] == 0) {
                    zeros_row.insert(i);
                    zeros_column.insert(j);
                }
            }
        }
        for(int i = 0; i < rows; ++i) {
            for(int j = 0; j< column; ++j) {
                if(zeros_row.find(i) != zeros_row.end())
                    matrix[i][j] = 0;
                if(zeros_column.find(j) != zeros_column.end())
                    matrix[i][j] = 0;
            }
        }
    }
};
