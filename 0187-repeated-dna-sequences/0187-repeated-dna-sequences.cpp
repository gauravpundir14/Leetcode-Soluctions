class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        vector<string>ans;
        unordered_map<string,int> mp;
        if(s.length()<10) return ans;
        for(int i=0;i<s.size()-9;i++)
        {
            string temp=s.substr(i,10);
            if(mp.find(temp)!=mp.end())
            {
                mp[temp]++;
            }
            else
            {
                mp[temp]=1;
            }
            
        }
        
        for(auto i:mp)
        {
            if(i.second>1)
            {
                ans.push_back(i.first);
            }
        }
        return ans;
        
    }
};