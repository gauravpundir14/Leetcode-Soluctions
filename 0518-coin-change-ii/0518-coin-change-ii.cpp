class Solution {
public:
    int ff(int n,int t,vector<int>&coin,vector<vector<int>>&dp)
    {
        if(n==0)
            return(t%coin[0]==0);

        if(dp[n][t]!=-1) return dp[n][t];
        int nottake=ff(n-1,t,coin,dp);
        int take=0;
        if(coin[n]<=t) take=ff(n,t-coin[n],coin,dp);
        return dp[n][t]=take+nottake;
    }
    int change(int amount, vector<int>& coins) {
        int n=coins.size();
        vector<vector<int>>dp(n,vector<int>(amount+1,-1));
        return ff(n-1,amount,coins,dp);
    }
};