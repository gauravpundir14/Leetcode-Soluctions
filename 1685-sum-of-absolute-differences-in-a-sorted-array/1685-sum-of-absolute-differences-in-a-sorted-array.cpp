class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        vector<int>result;
        int lnum=0;
        int lsum=0;
        int sum=0;
        for(auto i:nums)
        {
            sum=sum+i;
        }
        
        for(int i=0;i<nums.size();i++)
        {   int rsum=sum-lsum-nums[i];
            int rnum=nums.size()-1-lnum;
            result.push_back(abs((lnum*nums[i]-lsum)+(rsum-rnum*nums[i])));
            lnum++;
            lsum=lsum+nums[i];
        }
        return result;
    }
};