class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<int> nums (10,0);
        int row = 0, column = 0;
        while(column < 9) {
            if(columnCheck(board, nums, column) == false)
                return false;
            ++column;
        }
        while(row < 9) {
            if(rowCheck(board, nums, row) == false)
                return false;
            ++row;
        }
        row = 0, column = 0;
        for(int i = 0; i <= 6; i+=3) {
            for(int j = 0; j <= 6; j+=3) {
                if(boxCheck(board, nums, j, i) == false)
                    return false;
            }
        }
        return true;
    }
    
    bool rowCheck(vector<vector<char>>& board, vector<int> nums, int row) {
        int number = 0;
        for(int i = 0; i < 9; ++i) {
            if(board[row][i] == '.')
                continue;
            number = board[row][i] - '0';
            if(nums[number] == 0)
                nums[number] = 1;
            else
                 return false;    
        }
        return true;
    }
    
    bool columnCheck(vector<vector<char>>& board, vector<int> nums, int column) {
        int number = 0;
        for(int i = 0; i < 9; ++i) {
            if(board[i][column] == '.')
                continue;
            number = board[i][column] - '0';
            if(nums[number] == 0)
                nums[number] = 1;
            else
                 return false;    
        }
        return true;
    }
    
    bool boxCheck(vector<vector<char>>& board, vector<int> nums, int column, int row) {
        int number = 0;
        for(int i = row; i < row+3; ++i) {
            for(int j = column; j < column +3; ++j) {
                if(board[i][j] == '.')
                    continue;
                number = board[i][j] - '0';
                if(nums[number] == 0)
                    nums[number] = 1;
                else
                    return false;
            }
        }
        return true;
    }
};
