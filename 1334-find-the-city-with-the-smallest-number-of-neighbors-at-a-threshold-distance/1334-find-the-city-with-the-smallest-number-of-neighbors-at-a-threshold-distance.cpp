class Solution {
public:
    int findTheCity(int n, vector<vector<int>>& edges, int distanceThreshold) {
        vector<vector<int>> mat(n,vector<int>(n,INT_MAX));
        
        for(auto it:edges)
        {
            mat[it[0]][it[1]]=it[2];
            mat[it[1]][it[0]]=it[2];
        }
        
        for (int i = 0; i < n; i++) mat[i][i] = 0;
        
        for(int via=0;via<n;via++)
        {
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<n;j++)
                {
                    if(mat[i][via] == INT_MAX || mat[via][j] == INT_MAX) continue;
                    else
                    {
                        mat[i][j]=min(mat[i][j],mat[i][via]+mat[via][j]);
                    }
                }
            }
        }
        
        
        
        int citycnt=n;
        int cityno=-1;
        for (int city = 0; city < n; city++) {
			int cnt = 0;
			for (int adjCity = 0; adjCity < n; adjCity++) {
				if (mat[city][adjCity] <= distanceThreshold)
					cnt++;
			}

			if (cnt <= citycnt) {
				citycnt = cnt;
				cityno = city;
			}
		}
		return cityno;
        
    }
};