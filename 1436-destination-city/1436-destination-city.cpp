class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        unordered_map<string,int> ump;
        for(int i=0;i<paths.size();i++)
        {
            ump[paths[i][0]]++;
        }
        
        for(int i=0;i<paths.size();i++)
        {
            if(ump.count(paths[i][1])==0)
            {  string ans=paths[i][1];
                return ans;
            }
        }
        return "-1";
    }
};