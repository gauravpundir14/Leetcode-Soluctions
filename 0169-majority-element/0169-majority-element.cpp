class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int maxi=0;
        int ans=0;
        unordered_map<int,int>ump;
        for(auto i:nums)
        {
            ump[i]++;
        }
        
        for(auto i:ump)
        {
            if(i.second>maxi)
            {
                maxi=i.second;
                ans=i.first;
            }
        }
        return ans;
    }
};