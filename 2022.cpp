class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        vector<vector<int>> result( m , vector<int> (n, 0));
        int length_original = original.size();
        bool is_possible = Is2DArrayPossible(length_original, m, n);
        if(is_possible == false)
            return {};
        int row = 0, column = 0;
        for(int i = 0; i < length_original; ++i) {
            result[row][column] = original[i];
            ++column;
            if(column == n) {
                ++row;
                column = 0;
            }
        }
        return result;
    }
    
    bool Is2DArrayPossible(int length_original, int m, int n) {
        int total_elements_in_result = m * n;
        if(total_elements_in_result != length_original)
            return false;
        return true;
    }
};
