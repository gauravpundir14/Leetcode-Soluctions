class Solution {
public:
    double f(int n1 , int n2 , vector<vector<double>>& dp)
    {
        //if(n1<0 || n2<0) 
        if(n1==0 && n2==0) return 0.5;
        if(n1==0) return 1;
        if(n2==0)return 0;

        if(dp[n1][n2]!=-1) return dp[n1][n2];

        return dp[n1][n2] = 0.25*(f(max(0,n1-100),max(0,n2),dp)+
                                  f(max(0,n1-75),max(0,n2-25),dp)+
                                  f(max(0,n1-50),max(0,n2-50),dp)+
                                  f(max(0,n1-25),max(0,n2-75),dp));
       

    }
    double soupServings(int n) {
        if(n>=5000) return 1;
        vector<vector<double>> dp(n+1,vector<double>(n+1,-1));
        return f(n,n,dp);
    }
};