class Solution {
public:
     int dp[505][505];
    int minCount(int idx1, int idx2, string &s) {
        if(idx1 >= idx2) return 0;
        if(dp[idx1][idx2] != -1) return dp[idx1][idx2];
        if(s[idx1] == s[idx2]) {
            return dp[idx1][idx2] = minCount(idx1+1, idx2-1, s);
        }
        return dp[idx1][idx2] = 1 + min(minCount(idx1+1, idx2, s), minCount(idx1, idx2-1, s));
    }
    int minInsertions(string s) {
        int n = s.length();
        memset(dp, -1, sizeof dp);
        return minCount(0, n-1, s);
    }
};