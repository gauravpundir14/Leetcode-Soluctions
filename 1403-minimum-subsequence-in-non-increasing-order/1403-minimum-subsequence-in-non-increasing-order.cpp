class Solution {
public:
    vector<int> minSubsequence(vector<int>& nums) {
        int sum=0;
        for(int i=0;i<nums.size();i++)
        {
            sum=sum+nums[i];
        }
        int res=0;
        vector<int> ans;
        sort(nums.begin(),nums.end());
        int n=nums.size()-1;
        while(res<=sum)
        {
            res=res+nums[n];
            sum=sum-nums[n];
            ans.push_back(nums[n]);
            n--;
        }
        return ans;
        
    }
};