class Solution {
public:
    int maxSubArray(vector<int>& nums) {
         if(nums.size()==1) return nums[0];
        int cur = 0, ans = INT_MIN;
                
        for(int itr = 0; itr < nums.size(); itr++){
          cur=cur+nums[itr];
            if(cur>ans)
            {
                ans=cur;
            }
            if(cur<0)
            {
                cur=0;
            }
        }
        
        return ans;
    }
};