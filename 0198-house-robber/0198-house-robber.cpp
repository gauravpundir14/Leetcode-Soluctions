class Solution {
public:
	int rob(vector<int>& nums) {
		vector<int>dp(nums.size());
		dp[0]=nums[0];
		for(int i=1;i<nums.size();i++){
			int pick=nums[i];
			if(i!=1)pick+=dp[i-2];
			int notpick=dp[i-1];
			dp[i]=max(pick,notpick);
		}
		return dp[nums.size()-1];
	}
};