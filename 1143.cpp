//Brute force
int longestCommonSubsequence(string text1, string text2) {
        int length_text1 = text1.size(), length_text2 = text2.size();
        return findLongestCommonSubsequence(text1,length_text1, text2, length_text2);
    }
    
    int findLongestCommonSubsequence(string text1,int length_text1, string text2, int length_text2) {
        if(length_text1 == 0 || length_text2 == 0)
            return 0;
        if(text1[length_text1] == text2[length_text2])
            return 1 + findLongestCommonSubsequence(text1,length_text1-1, text2, length_text2-1);
        return max(findLongestCommonSubsequence(text1,length_text1-1, text2, length_text2),findLongestCommonSubsequence(text1,length_text1, text2, length_text2-1));
}
