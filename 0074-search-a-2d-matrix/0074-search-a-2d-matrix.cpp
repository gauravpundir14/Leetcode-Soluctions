class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size();
        int m=matrix[0].size();
        int s=0;
        int e=n*m-1;
        
        while(s<=e)
        {
           int mid=s+(e-s)/2;
            
           int i=mid/m;
           int j=mid%m;
            
            if(matrix[i][j]==target) return true;
            
            else if(matrix[i][j]<target) s=mid+1;
            
            else
                e=mid-1;
        }
        return false;
    }
};

