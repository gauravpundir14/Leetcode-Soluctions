class Solution {
public:
    int prev = 0;
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int m = image.size();
        int n = image[0].size();
        vector<vector<int>> vis(m,vector<int> (n,0));
        prev = image[sr][sc];
        bfs(sr,sc,color,vis,image);
        return image;
    }
    
    void bfs(int sr, int sc, int color, vector<vector<int>>& vis, vector<vector<int>>& image){
        int m = vis.size();
        int n = vis[0].size();
        image[sr][sc] = color;
        queue<pair<int,int>> q;
        q.push({sr,sc});
        vis[sr][sc] = 1;
        int drow[] = {-1,0,1,0};
        int dcol[] = {0,1,0,-1};
        while(!q.empty()){
            auto it = q.front();
            q.pop();
            int row = it.first;
            int col = it.second;
            for(int i=0;i<4;i++){
                int nrow = row + drow[i];
                int ncol = col + dcol[i];
                if(nrow>=0 && nrow<m && ncol>=0 && ncol<n && image[nrow][ncol] == prev && vis[nrow][ncol] == 0){
                    image[nrow][ncol] = color;
                    vis[nrow][ncol] = 1;
                    q.push({nrow,ncol});
                }
            }
        }
    }
};