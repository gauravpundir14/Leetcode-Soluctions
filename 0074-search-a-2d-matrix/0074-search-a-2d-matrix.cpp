
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int s=0,a,b,m;
        int l1=matrix.size();
        int l2=matrix[0].size();
        int l=l1*l2-1;
        while(s<=l)
        {  m=s+(l-s)/2;
            a=m/l2;
            b=m%l2;
         
            if(matrix[a][b]==target)
                return true;
         
          else if(matrix[a][b]>target)
              l=m-1;
          else
              s=m+1;
        }
        
        return false;
    }
};