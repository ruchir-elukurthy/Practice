class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int rows = matrix.size();
        int column = matrix[0].size();
        vector<vector<int>> transpose( column , vector<int> (rows, 0));
        for(int i = 0; i < column; ++i) {
            for(int j = 0; j < rows; ++j) {
                transpose[i][j] = matrix[j][i];
            }
        }
        return transpose;
    }
};
