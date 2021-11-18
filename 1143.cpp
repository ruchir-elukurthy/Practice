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


//optimal
class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        int length_text1 = text1.size(), length_text2 = text2.size();
        int dp[length_text1+1][length_text2+1];
        for(int i = 0; i <= length_text1; ++i) {
            for(int j = 0; j <= length_text2; ++j) {
                dp[i][j] = 0;
            }
        }
        for(int i = 1; i <= length_text1; ++i) {
            for(int j = 1; j <= length_text2; ++j) {
                if(text1[i-1] == text2[j-1])
                    dp[i][j] = 1 + dp[i-1][j-1];
                else
                    dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
            }
        }
        return dp[length_text1][length_text2];
    }
};
