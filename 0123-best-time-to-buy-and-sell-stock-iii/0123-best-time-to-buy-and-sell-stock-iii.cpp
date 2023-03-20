class Solution {
public:

int solve(int i,int buy,int sz,vector<int>& p,vector<vector<vector<int>>>&dp){
    if(sz==0)return 0;
    if(i>=p.size())return 0;
    if(dp[i][buy][sz]!=-1)return dp[i][buy][sz];
    if(buy){
        dp[i][buy][sz]=max(-p[i]+solve(i+1,0,sz,p,dp),solve(i+1,1,sz,p,dp));
    }
    else{
        dp[i][buy][sz]=max(p[i]+solve(i+1,1,sz-1,p,dp),solve(i+1,0,sz,p,dp));
    }
    return dp[i][buy][sz];

}
    int maxProfit(vector<int>& prices) {
        vector<vector<vector<int>>>dp(prices.size(),vector<vector<int>>(2,vector<int>(3,-1)));
        return solve(0,1,2,prices,dp);
    }
};