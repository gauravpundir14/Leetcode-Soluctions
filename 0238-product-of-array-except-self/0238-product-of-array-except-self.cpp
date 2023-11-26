class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        int pre[n];
        int post[n];
        int output[n];
        pre[0]=nums[0];
        post[n-1]=nums[n-1];
        for(int i=1;i<n;i++)
        {
            pre[i]=pre[i-1]*nums[i];
        }
         for(int i=n-2;i>=0;i--)
        {
            post[i]=post[i+1]*nums[i];
        }
        output[0]=post[1];
        output[n-1]=pre[n-2];
        
        for(int i=1;i<n-1;i++)
        {
            output[i]=pre[i-1]*post[i+1];
        }
        vector<int> ans;
        for(auto i:output)ans.push_back(i);
        return ans;
    }
};