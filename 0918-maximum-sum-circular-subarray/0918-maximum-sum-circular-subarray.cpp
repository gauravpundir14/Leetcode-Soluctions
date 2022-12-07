class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int n=nums.size(), mn=INT_MAX, mx=INT_MIN, cr=0, sm=0;
        int mxK=INT_MIN, crK=0;
        for (int i=0; i<n; i++) {
            cr += nums[i];
            if (cr>=0) cr = 0;
            mn = min(mn, cr);
            crK += nums[i];
            mxK = max(mxK, crK);
            if (crK<0) crK=0;
            sm+=nums[i];
            mx=max(mx, nums[i]);
        }
        int ans = max(sm-mn, max(mx, mxK));
        return ans==0 ? mx : ans;        
    }
};