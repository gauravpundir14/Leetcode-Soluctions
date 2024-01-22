class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        set<int>st;
        for(auto i:nums) st.insert(i);
         int prod=original;
        while(st.find(prod)!=st.end())
        {
            prod=prod*2;
        }
        return prod;
    }
};