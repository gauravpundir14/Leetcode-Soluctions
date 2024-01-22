class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int n=nums.size();
        int maxi=nums[0];
        int ind=0;
        for(int i=1;i<n;i++)
        {
            if(nums[i]>maxi)
            {
                maxi=nums[i];
                ind=i;
            }
        }
        
        for(int i=0;i<n;i++)
        {   if(i==ind) continue;
            if(maxi<2*nums[i])
            {   
                ind=-1;
            }
        }
        return ind;
    }
};