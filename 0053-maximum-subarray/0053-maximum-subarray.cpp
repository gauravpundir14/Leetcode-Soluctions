class Solution {
public:
    int maxSubArray(vector<int>& nums) {

        int curMax = 0, maxAns = INT_MIN;
                
        for(int itr = 0; itr < nums.size(); itr++){
            curMax = (curMax > 0) ? curMax + nums[itr] : nums[itr];
            maxAns = max(maxAns, curMax);
        }
        
        return maxAns;
    }
};