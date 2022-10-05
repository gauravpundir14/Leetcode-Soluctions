class Solution {
public:
   
    
   
    
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        
        map<int,string> up;
        vector<string > ans;
        
        for(int x=0;x<names.size();x++)
        {
            up[heights[x]]=names[x];
        }
        sort(heights.begin(), heights.end());
        
        
        
        for(int i=names.size()-1;i>=0;--i)
        {
            ans.push_back(up[heights[i]]);
        }
        
        return ans;
    }
};

