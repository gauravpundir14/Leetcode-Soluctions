class Solution {
public:
    void  recursion(vector<string> & ans,  string temp , int m, int n)
    {
        if(n==0 && m==0)
        {
            ans.push_back(temp);
             return ;
        }
        
        if(m>0)
        recursion(ans,temp+')',m-1,n);
          if(n>0)
        recursion(ans,temp+'(',m+1,n-1);
        
        
    }
    
    vector<string> generateParenthesis(int n) {
        string temp="";
        vector<string> ans;
        
        recursion(ans,temp,0,n);
        return ans;
        
    }
};