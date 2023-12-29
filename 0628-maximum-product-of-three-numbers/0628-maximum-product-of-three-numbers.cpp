class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int a=nums[n-1];
        int b=nums[n-2];
        int c=nums[n-3];
        int d=nums[0];
        int e=nums[1];
        return max(a*b*c,a*d*e);
    }
};