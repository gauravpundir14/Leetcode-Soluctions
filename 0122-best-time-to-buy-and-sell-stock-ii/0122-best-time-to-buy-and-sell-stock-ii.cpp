class Solution {
public:
    int f(int ind,vector<int>& prices,int buy, vector<vector<int>>&dp,int n)
    {
        if(ind == n ) return 0;
        
        if(dp[ind][buy]!=-1)return dp[ind][buy];
        int profit=0;
        if(buy)
        {
             profit=max(-prices[ind]+f(ind+1,prices,0,dp,n),0+f(ind+1,prices,1,dp,n));
            
        }
        else
            
        profit=max(prices[ind]+f(ind+1,prices,1,dp,n),0+f(ind+1,prices,0,dp,n));
        
       return  dp[ind][buy]=profit;
        
    }
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        vector<vector<int>>dp(n,vector<int>(2,-1));
    return   f(0,prices,1,dp,n);
        
    }
};