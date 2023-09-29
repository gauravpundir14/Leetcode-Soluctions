class Solution {
public:
    int ncr(int n,int r)
    {
        long long ans=1;
        for(int i=0;i<r;i++)
        {
            ans=ans*(n-i);
            ans=ans/(i+1);
        }
        return ans;
    }
    vector<vector<int>> generate(int n) {
         vector<vector<int>> ans;

    //Store the entire pascal's triangle:
    for (int row = 1; row <= n; row++) {
        vector<int> tempLst; // temporary list
        for (int col = 1; col <= row; col++) {
            tempLst.push_back(ncr(row - 1, col - 1));
        }
        ans.push_back(tempLst);
    }
    return ans;
        
    }
};