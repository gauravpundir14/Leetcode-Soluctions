class Solution {
public:
    int cal(vector<int> nums)
    {     vector<int >dp(nums.size());
        dp[0]=nums[0];
            for(int i=1;i<nums.size();i++)
            {
              int  pick=nums[i];
                if(i>1)
                    pick+=dp[i-2];
               int notpick=dp[i-1];
                
                dp[i]=max(pick,notpick);
                
            }
     
     return dp[nums.size()-1];
    }
    int rob(vector<int>& nums) {
        if(nums.size()==1) return nums[0];
        int n=nums.size();
        vector<int> temp1(n);
        vector<int> temp2(n);
        for(int i=0;i<n;i++)
        {
            if(i!=0)temp1.push_back(nums[i]);
            if(i!=n-1)temp2.push_back(nums[i]);
        }
        
        return max(cal(temp1),cal(temp2));
        
    }
};