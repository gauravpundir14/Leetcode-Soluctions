class Solution {
public:
bool vis[100][100];
int perimeter = 0;
void dfs(vector<vector<int>>& grid,int n,int m,int i,int j){
    if(i<0 || j<0 || i>=n || j>=m){
        perimeter++;
        return;
    } 

    if(vis[i][j] == true) return;
    if(grid[i][j] == 0) {
        perimeter++;
        return;
    }

    vis[i][j] = true;
    dfs(grid,n,m,i-1,j);
    dfs(grid,n,m,i+1,j);
    dfs(grid,n,m,i,j-1);
    dfs(grid,n,m,i,j+1);
}

    int islandPerimeter(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j] == 1 && vis[i][j] == false){
                    dfs(grid,n,m,i,j);
                }
            }
        }
        return perimeter;
    }
};