class Solution {
public:
    void help(vector<vector<int>>&ans,set<vector<int>>&st,vector<int>& nums,int index)
    {
        if(index==nums.size() and st.find(nums)==st.end())
        {
            ans.push_back(nums);
            st.insert(nums);
            
        }
        
        for(int i=index;i<nums.size();i++)
        {
            swap(nums[index],nums[i]);
            help(ans,st,nums,index+1);
            swap(nums[i],nums[index]);
            
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> ans;
        set<vector<int>>st;
        help(ans,st,nums,0);
        return ans;
        
    }
};