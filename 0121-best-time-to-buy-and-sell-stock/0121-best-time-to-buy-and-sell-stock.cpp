class Solution {
        int f(int i, vector<int> & prices, int mini, vector<int>&dp, int n)
        {
            if(i>=n) return 0;

            if(dp[i]!=-1) return i;
            mini=min(mini,prices[i]);
            int profit=prices[i]-mini;
            return dp[i]=max(profit, f(i+1,prices,mini,dp,n));
        }
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        vector<int>dp(n,-1);
        return f(0,prices,prices[0],dp,n);
    }
};
