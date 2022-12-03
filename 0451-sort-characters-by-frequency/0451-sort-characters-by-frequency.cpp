class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> ump;
        vector<pair<int,char>> vec;
        string ans="";
        
        for(int i=0;i<s.size();i++)
        {
            ump[s[i]]++;
        }
        
        for(auto i:ump)
        {
            vec.push_back({i.second,i.first});
        }
        sort(vec.rbegin(),vec.rend());
            for(int i=0;i<vec.size();i++)
        {
            int t = vec[i].first;
            while(t--)
            {
                ans += vec[i].second;
            }
        }

         return ans;
        
    }

};