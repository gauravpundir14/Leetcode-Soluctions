class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int ans=0;
        unordered_map<int,int>mp;
        for(int i:nums)
        {
            mp[i]++;
        }
        for(auto i:mp)
        {
            if(i.second!=2)
            {
                ans=i.first;
            }
        }
        return ans;
    }
};