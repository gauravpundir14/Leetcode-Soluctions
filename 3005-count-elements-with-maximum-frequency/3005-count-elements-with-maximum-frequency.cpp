class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int> m;
        int maxi=0,n=nums.size();
        for(int i=0;i<n;i++)
        {
            m[nums[i]]++;
            maxi=max(m[nums[i]],maxi);
        }
        int ans=0;
    for(auto [u,v]:m) if(maxi==v) ans+=maxi;
        return ans;
    }
};