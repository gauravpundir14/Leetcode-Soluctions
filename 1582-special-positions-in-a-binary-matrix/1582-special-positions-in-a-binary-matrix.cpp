class Solution {
public:
    bool check_col(int i,int j,vector<vector<int>>& mat)
    { for(int k=0;k<mat.size();k++)
    {
        if(mat[k][j]==1 and k!=i)
        {
            return false;
        }
    }
       return true; 
    }
    bool check_row(int i,int j,vector<vector<int>>& mat)
    {
        for(int k=0;k<mat[0].size();k++)
    {
        if(mat[i][k]==1 and k!=j)
        {
            return false;
        }
    }
       return true; 
        
    }
    int numSpecial(vector<vector<int>>& mat) {
        int ans=0;
        int n=mat.size();
        int m=mat[0].size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(mat[i][j]==1)
                {
                    if(check_col(i,j,mat) and check_row(i,j,mat)) ans++;
                }
            }
        }
        return ans;
    }
};