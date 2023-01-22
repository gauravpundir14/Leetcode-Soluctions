class Solution {
    
public:
    bool palin(string s,int st,int e)
    {
        while(st<=e)
        {
            if(s[st++]!=s[e--])
                return false;
            
            
        }
        return true;
    }
    
    void func(int ind ,string s,vector<string>&ds,vector<vector<string>> &ans)
    {
        if(ind==s.size())
        {
            ans.push_back(ds);
            return;
        }
        
        for(int i=ind;i<s.size();i++)
        {
            if(palin(s,ind,i))
            {
                ds.push_back(s.substr(ind,i-ind+1));
                func(i+1,s,ds,ans);
                ds.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<string>ds;
        vector<vector<string>> ans;
        func(0,s,ds,ans);
        return ans;
        
    }
};