class Solution {
public:
    int dp[1001][1001];
    int solve(int l,int r, string s)
    {
        if(l>=r) return dp[l][r]=1;
        if(dp[l][r]!=-1)return dp[l][r];
        if(s[l]==s[r])
        {
            return dp[l][r]=solve(l+1,r-1,s);
        }
        return dp[l][r]=0;
    }
    int countSubstrings(string s) {
        int n=s.length();
        int count=0;
        memset(dp,-1,sizeof(dp));
        for(int i=0;i<n;i++)
        {
            for(int j=i;j<n;j++)
            {
                count+=solve(i,j,s);
            }
        }
        return count;
    }
};