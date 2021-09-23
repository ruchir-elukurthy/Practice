class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        unordered_map<int,int> count_fruits;
        int left = 0, right = 0, sum = 0;
        int max_fruits = INT_MIN, len = fruits.size();
        for(right = 0; right < len; ++right) {
            if(count_fruits.find(fruits[right]) == count_fruits.end()) {
                count_fruits.insert({fruits[right], 1});
            }
            else {
                ++count_fruits[fruits[right]];
            }
            ++sum;
            if(count_fruits.size() == 3) {
                while(true) {
                    --count_fruits[fruits[left]];
                    --sum;
                    if(count_fruits[fruits[left]] == 0)
                        break;
                    ++left;
                }
                count_fruits.erase(fruits[left]);
                ++left;
            }
            max_fruits = max(max_fruits, sum);
        }
        return max_fruits;
    }
};
