class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        
        int n=mat.size();
        int m=mat[0].size();
        int i=0;
        int j=0;
        int sum=0;
      while(i<n and j<m)
      {
                sum=sum+mat[i][j];
                mat[i][j]=0;
                i++;
                j++;
            
       }
        
        i=0;
        j=m-1;
          while(i<n and j>=0)
      {
                sum=sum+mat[i][j];
                mat[i][j]=0;
                i++;
                j--;
            
       }
        
        return sum;
        
        
    }
};