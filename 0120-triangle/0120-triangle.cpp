class Solution {
public:
    
    int f(int i,int j,vector<vector<int>> &dp,vector<vector<int>>& triangle)
    {
        if(i==triangle.size()-1) return triangle[triangle.size()-1][j];
        if(i>triangle.size()) return 1e9;
        if(dp[i][j]!=-1) return dp[i][j];
        int d=triangle[i][j]+f(i+1,j,dp,triangle);
        int dl=triangle[i][j]+f(i+1,j+1,dp,triangle);
        return dp[i][j]=min(d,dl);
        
    }
    int minimumTotal(vector<vector<int>>& triangle) {
        int n=triangle.size();
        vector<vector<int>> dp(n,vector<int>(n,-1));
        return f(0,0,dp,triangle);
        
    }
};