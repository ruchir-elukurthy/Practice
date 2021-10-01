class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int len = arr.size();
        int pivot = find_pivot(arr,len,x);
        vector<int> result;
        if(pivot == -1) {
            for(int i=0; i<k; i++) result.push_back(arr[i]);
                return result;
        }
        int length_result = 0;
        int left = pivot, right = pivot+1;
        while(k > 0 && left >= 0 && right < len) {
            if(abs(x-arr[left]) <= abs(x-arr[right])) {
                result.push_back(arr[left]);
                --left;
            } 
            else {
                result.push_back(arr[right]);
                ++right;
            }
            k--;
        }
        while(k > 0 && left >= 0) {
            result.push_back(arr[left]);
            --left;
            --k;
        }
        while(k > 0 && right < len) {
            result.push_back(arr[right]);
            ++right;
            --k;
        }
        sort(result.begin(), result.end());
        return result;
    }
    
    int find_pivot(vector<int> & arr, int len, int x) {
        int left = 0, right = len-1, mid = 0;
        while(left <= right) {
            mid = left + (right-left)/2;
            if(arr[mid] == x) {
                return mid;
            }
            if(arr[mid] < x && (mid== len-1 || x<arr[mid+1])) return mid;
            else if(arr[mid] > x) {
                right = mid-1;
            }
            else 
                left = mid+1;
        }
        return -1;
    }
};
