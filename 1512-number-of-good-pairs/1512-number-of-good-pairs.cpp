class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int,int>mp;
        int count=0;
        for(int i=0;i<nums.size();i++)
        {   for(int j=i+1;j<nums.size();j++)
        {
            if(nums[i]==nums[j] and i<j)
            {
                count++;
            }
        }
        }
        
        return count;
    }
};