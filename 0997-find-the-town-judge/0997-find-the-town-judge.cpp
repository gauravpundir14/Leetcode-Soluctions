class Solution 
{
public:
    int findJudge(int n, vector<vector<int>>& trust) 
    {
        vector<int> ans(n+1);
        
        for(auto it:trust)
        {
            ans[it[0]]--; 
            ans[it[1]]++; 
        }
        
        
        for(int i=1; i<=n; i++)
            if(ans[i]==n-1) return i;
        
        
        return -1;
    }
};