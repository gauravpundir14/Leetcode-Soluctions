class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int> mp;
        vector<int> ans;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        
        int m=nums.size()/3;
        for(auto  i:mp)
        {
            if(i.second>m)
            {
                ans.push_back(i.first);
            }
        }
        
        return ans;
    }
};