
class Solution {
public:
    int f(int i, int j, vector<vector<int>>& obstacleGrid, vector<vector<int>>& dp){
        if(i==0 &&j==0 && obstacleGrid[i][j]!=1){return 1;}
        if(i<0 || j<0){return 0;}
        if(obstacleGrid[i][j]==1){return 0;}
        if(dp[i][j]!=-1){return dp[i][j];}
        return dp[i][j]=f(i-1, j, obstacleGrid, dp)+f(i, j-1, obstacleGrid, dp);
    }
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int n=obstacleGrid.size(), m=obstacleGrid[0].size();
        vector<vector<int>>dp(n, vector<int>(m, -1));
        return f(n-1, m-1, obstacleGrid, dp);
    }
};