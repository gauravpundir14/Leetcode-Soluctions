class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        int p=0,l=1;
        vector<int> ans(n,0);
        for(auto it:nums){
            if(it>0) {
                ans[p]=it;
                p+=2;
            }
            else{
                ans[l]=it;
                l+=2;
            }
        }
    return ans;
    }
};