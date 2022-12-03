class Solution {
public:
string frequencySort(string s) {
map<char,int>umap;
vector<pair<int,char>>v;
for(int i=0;i<s.length();i++)
{
umap[s[i]]++;
}
map<char,int>::iterator i=umap.begin();
while(i!=umap.end())
{
v.push_back({i->second,i->first});
i++;
}
​
sort(v.rbegin(), v.rend());
string ans="";
for(int i=0;i<v.size();i++)
{
int t = v[i].first;
while(t--)
{
ans += v[i].second;
}
}
​
return ans;
​
}
};