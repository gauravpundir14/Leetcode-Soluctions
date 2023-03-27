class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long res=0;
        long long ans=0;
        
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
            {
                res=res+1;
                ans=ans+res;
            }
            else
                res=0;
        }
       return ans; 
    }
};