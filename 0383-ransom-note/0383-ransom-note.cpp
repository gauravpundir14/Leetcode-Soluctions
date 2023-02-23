class Solution {
public:
    bool canConstruct(string r, string m) {
        vector<int > count(26,0);
        
        for(int i=0;i<m.size();i++)
        {
             count[m[i]-97]++;
        }
        
        
        for(int i=0;i<r.size();i++)
        {
             count[r[i]-97]--;
        }
        
        for(auto i:count)
        {
            if(i<0)
                return false;
        }
        
        
        
        
        return true ;
    }
};