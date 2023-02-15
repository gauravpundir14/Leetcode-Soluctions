class Solution {
public:
    int f(int ind,vector<vector<int>>&dp,vector<int>& coins,int amount)
    {
        if(ind==0)
        {
            if(amount%coins[0]==0) return amount/coins[ind];
            else return 1e9;
            
        }
        if(dp[ind][amount]!=-1) return dp[ind][amount];
       int nt=0+f(ind-1,dp,coins,amount);
      int  t=INT_MAX;
        if(coins[ind]<=amount)
        {
           t=1+f(ind,dp,coins,amount-coins[ind]); 
        }
        
        return dp[ind][amount]=min(nt,t);
    }
    int coinChange(vector<int>& coins, int amount) {
        int n=coins.size();
        vector<vector<int>>dp(n,vector<int>(amount+1,-1));
        int x =f(n-1,dp,coins,amount);
        if(x!=1e9) return x;
        else return -1;
        
        
    }
};