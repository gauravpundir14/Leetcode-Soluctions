class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
         int n = grid.size();
        int m = grid.size();
        if(grid[0][0] != 0 or grid[n-1][m-1] != 0)   return -1;   //Edge Case
        
        vector<vector<int>>vis(n , vector<int>(m, 0));
        queue<pair<pair<int,int>,int>>q;
        q.push({{0,0}, 1});
        vis[0][0] = 1;
        int timeTaken = INT_MAX;
        
        while(!q.empty())
        {
            int row = q.front().first.first;
            int col = q.front().first.second;
            int time = q.front().second;
            q.pop();

            if (row == n-1 and col == m-1)   return time;
            
            for (int delrow = -1 ; delrow <= 1; delrow ++)
            {
                for (int delcol = -1; delcol <= 1; delcol ++)
                {
                    int nrow = row + delrow;
                    int ncol = col + delcol;
                    
                    if (nrow >= 0 and nrow < n and ncol >=0 and ncol < m and vis[nrow][ncol] != 1 and grid[nrow][ncol] == 0)
                    {
                        q.push({{nrow, ncol}, time +1});
                        vis[nrow][ncol] = 1;
                    }
                }
            }
        }
        
        return -1;
        
    }
};