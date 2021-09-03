class Solution {
    private:
        vector<vector<int>> result;
        vector<int> combination;
public:
    vector<vector<int>> combine(int n, int k) {
        combinations(1,n,k);
        return result;
    }
    void combinations(int low, int high, int size) {
        if(size == combination.size()) {
            result.push_back(combination);
            return;
        }
        for(int i = low; i <= high; ++i) {
            combination.push_back(i);
            combinations(i+1,high,size);
            combination.pop_back();
        }
    }
};
