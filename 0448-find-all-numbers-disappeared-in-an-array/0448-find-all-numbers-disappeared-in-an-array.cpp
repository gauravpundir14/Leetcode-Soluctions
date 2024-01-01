class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        set<int>st;
        for(auto i:nums) st.insert(i);
        vector<int>ans;
        for(int i=1;i<=nums.size();i++)
        {
            if(st.find(i)==st.end())
            {
                ans.push_back(i);
            }
        }
        return ans;
    }
};