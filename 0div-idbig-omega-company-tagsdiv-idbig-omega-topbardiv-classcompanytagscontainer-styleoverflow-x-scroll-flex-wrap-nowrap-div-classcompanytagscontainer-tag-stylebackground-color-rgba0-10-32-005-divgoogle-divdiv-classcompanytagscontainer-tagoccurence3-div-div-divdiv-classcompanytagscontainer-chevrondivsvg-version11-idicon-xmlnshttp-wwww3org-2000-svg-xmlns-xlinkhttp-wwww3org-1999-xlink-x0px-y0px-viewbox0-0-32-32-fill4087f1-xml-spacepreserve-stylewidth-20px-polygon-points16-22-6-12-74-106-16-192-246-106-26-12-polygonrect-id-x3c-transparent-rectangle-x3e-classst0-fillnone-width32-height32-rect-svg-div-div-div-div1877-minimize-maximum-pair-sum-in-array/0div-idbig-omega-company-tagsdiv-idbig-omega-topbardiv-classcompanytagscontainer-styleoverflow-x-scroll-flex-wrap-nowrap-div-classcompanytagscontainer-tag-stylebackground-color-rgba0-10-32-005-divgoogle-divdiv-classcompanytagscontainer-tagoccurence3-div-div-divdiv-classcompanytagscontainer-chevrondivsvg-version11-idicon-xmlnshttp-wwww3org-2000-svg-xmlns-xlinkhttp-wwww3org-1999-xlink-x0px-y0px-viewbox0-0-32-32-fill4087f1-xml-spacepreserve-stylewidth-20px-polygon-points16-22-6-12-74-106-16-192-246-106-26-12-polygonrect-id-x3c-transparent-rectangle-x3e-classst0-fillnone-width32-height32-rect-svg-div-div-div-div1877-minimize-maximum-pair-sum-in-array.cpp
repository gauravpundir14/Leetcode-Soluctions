class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
       int start=0;
       int end=nums.size()-1;
       int minisum=INT_MIN;
        while(start<end)
        {
            minisum=max(minisum,nums[start]+nums[end]);
            start++;
            end--;
        }
        return minisum;
    }
};