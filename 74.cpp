class Solution {
private:
    int rows;
    int columns;
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int top = 0, bottom = matrix.size()-1;
        rows = matrix.size(), columns = matrix[0].size();
        int mid = 0;
        while(top <= bottom) {
            mid = (top+bottom)/2;
            if(target >= matrix[mid][0] && target <= matrix[mid][columns-1]) {
                if(findTargetInRow(matrix,mid, target) == true) return true;
                return false;
            }
            else if(target < matrix[mid][0])
                bottom = mid-1;
            else
                top = mid+1;
        }
        return false;
    }
    
    bool findTargetInRow(vector<vector<int>>& matrix, int row, int target) {
        int left = 0, right = columns-1;
        int mid = 0;
        cout<<row<<columns<<endl;
        while(left <= right) {
            int mid = (left+right)/2;
            if(target == matrix[row][mid])
                return true;
            else if(target < matrix[row][mid])
                right = mid-1;
            else 
                left = mid+1;
        }
        return false;
    }
};
