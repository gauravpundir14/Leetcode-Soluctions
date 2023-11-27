class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int n=arr.size();
            int maxi=ceil(n/4);
        int ans=0;
        
        unordered_map<int,int>mp;
        for(auto i:arr) mp[i]++;
        
        for(auto i:mp)
        {
            if(i.second>=maxi)
            {
                maxi=i.second;
                ans=i.first;
            }
                
        }
        return ans;
    }
};