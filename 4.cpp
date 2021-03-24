class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int length1 = nums1.size();
        int length2= nums2.size();
        vector<int> mergedArray(length1+length2);
        int i = 0, j = 0, k = 0;
        while(i < length1 && j < length2) {
            if(nums1[i]<nums2[j]) {
                mergedArray[k++] = nums1[i++];
            }
            else {
                mergedArray[k++] = nums2[j++];
            }
        }
        if(j<nums2.size()) {
            while(j<nums2.size()) {
                mergedArray[k++]=nums2[j++];
            }
        }
        else {
            while(i<nums1.size()) {
                mergedArray[k++]=nums1[i++];
            } 
        }
        for(int r = 0; r<mergedArray.size(); ++r) {
            cout<<mergedArray[r];
        }
        double sum = 0;
        int mergedArrayLength = length1+length2;
        int mid = mergedArrayLength/2;
        cout<<mid;
        if(mergedArrayLength % 2 == 0) {
            sum = mergedArray[mid-1]+mergedArray[mid];
            return sum/2;
        }
        return mergedArray[mid]; 
    }
};
