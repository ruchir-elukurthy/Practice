#include <iostream>
#include<vector>
#include <math.h>

using namespace std;

void histogram(vector<int> count_of_each, int max_value);
int get_max(vector<int> nums, vector<int> & count_of_each);

int main() {
  vector<int> nums = {1,1,2,3,5,7,9,7,5,3,4};
  vector<int> count_of_each (10,0);
  int max_value = get_max(nums, count_of_each);
  histogram(count_of_each, max_value);
  return 0;
}

int get_max(vector<int> nums, vector<int> & count_of_each) {
  int max_value = 0;
  for(int i = 0; i< nums.size(); ++i) {
    ++count_of_each[nums[i]];
  }
  for(int j = 0; j < count_of_each.size(); ++j) {
    max_value = max(max_value,count_of_each[j]);
  }
  return max_value;
}

void histogram(vector<int> count_of_each, int max_value) {
  int row = max_value;
  int column = 9;
  vector<vector<char>> vec( row , vector<char> (column, ' '));
  for(int i = 0; i < row; ++i) {
    for(int j = 0; j < column; ++j) {
      if(count_of_each[j] != 0) {
        cout<<"*";
        --count_of_each[j];
      }
      else {
        cout<<" ";
      }
      cout<<" ";
    }
    cout<<endl;
  }
}
