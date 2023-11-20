class Solution {
public:
    int minimumEffortPath(vector<vector<int>>& heights) {
         priority_queue<pair<int, pair<int, int>>,vector<pair<int, pair<int, int>>>,greater<pair<int,pair<int,int>>>>pq;
         int n = heights.size();
        int m = heights[0].size();
        vector<vector<int>> diff(n,vector<int>(m,1e9)) ;
        diff[0][0] = 0;
        pq.push({0, {0, 0}});
        int dr[] = {-1, 0, 1, 0};
        int dc[] = {0, 1, 0, -1};
        
        while(!pq.empty())
        {   auto it = pq.top();
            pq.pop();
            int dif=it.first;
            int row=it.second.first;
            int col=it.second.second;
         if (row == n - 1 && col == m - 1)
                return dif;
         
         
          for (int i = 0; i < 4; i++)
            {
                
                int newr = row + dr[i];
                int newc = col + dc[i];
               if (newr >= 0 && newc >= 0 && newr < n && newc < m)
                {
                    
                    int newEffort = max(abs(heights[row][col] - heights[newr][newc]), dif);

                    if (newEffort < diff[newr][newc])
                    {
                        diff[newr][newc] = newEffort;
                        pq.push({newEffort, {newr, newc}});
                    }
                }
            }
        }
        return -1;
    }
};