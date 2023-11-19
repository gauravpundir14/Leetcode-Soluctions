class Solution {
public:
    int reductionOperations(vector<int>& nums) {
        int ans=0;
        sort(nums.begin(),nums.end());
        int prev=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            if(prev!=nums[i])
            {
                ans+=nums.size()-i;
                prev=nums[i];
            }
        }
        return ans;
    }
};