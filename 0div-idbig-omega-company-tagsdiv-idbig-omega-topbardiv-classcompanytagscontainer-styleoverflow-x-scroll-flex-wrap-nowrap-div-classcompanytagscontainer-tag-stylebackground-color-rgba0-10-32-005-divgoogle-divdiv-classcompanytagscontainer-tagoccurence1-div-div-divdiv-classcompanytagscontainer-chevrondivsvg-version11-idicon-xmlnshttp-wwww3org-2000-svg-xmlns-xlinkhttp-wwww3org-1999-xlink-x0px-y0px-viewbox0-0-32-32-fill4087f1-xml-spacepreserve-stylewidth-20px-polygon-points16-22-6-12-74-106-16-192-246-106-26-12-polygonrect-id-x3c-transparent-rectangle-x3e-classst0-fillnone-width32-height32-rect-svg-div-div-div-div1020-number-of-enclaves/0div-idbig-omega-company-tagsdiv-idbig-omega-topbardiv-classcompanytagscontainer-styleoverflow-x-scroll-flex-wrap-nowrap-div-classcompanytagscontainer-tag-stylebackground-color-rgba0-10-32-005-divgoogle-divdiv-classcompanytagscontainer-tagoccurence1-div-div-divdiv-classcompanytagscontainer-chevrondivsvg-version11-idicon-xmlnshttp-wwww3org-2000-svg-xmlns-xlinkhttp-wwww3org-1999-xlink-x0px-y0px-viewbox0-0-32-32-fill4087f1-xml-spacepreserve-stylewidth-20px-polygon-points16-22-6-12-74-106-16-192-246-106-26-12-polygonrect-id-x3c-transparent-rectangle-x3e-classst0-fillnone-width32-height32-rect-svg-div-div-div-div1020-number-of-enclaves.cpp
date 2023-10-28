class Solution {
public:
    int numEnclaves(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        
        vector<vector<int>> vis(n, vector<int>(m, 0));
        queue<pair<int,int>> q;
        
       int delrow[]={0,-1,0,1};
       int delcol[]={-1,0,1,0};
        
       for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(i==0 || j==0 || i==n-1 || j==m-1)
                {
                    if(grid[i][j]==1)
                    {
                        vis[i][j]=1;
                        q.push({i, j});
                    }
                }
            }
        }
        
        
        while(!q.empty())
        {
            int row=q.front().first;
            int col=q.front().second;
            q.pop();
            
            for(int i=0;i<4;i++)
            {
                int nr=row+delrow[i];
                int nc=col+delcol[i];
                if(nr>=0 and nr<n and nc>=0 and nc<m and !vis[nr][nc] and grid[nr][nc])
                {
                    q.push({nr,nc});
                    vis[nr][nc]=1;
                }
            }
        }
        
        
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(!vis[i][j] && grid[i][j]==1)
                {
                    cnt++;
                }
            }
        }

        return cnt;
        
    }
};