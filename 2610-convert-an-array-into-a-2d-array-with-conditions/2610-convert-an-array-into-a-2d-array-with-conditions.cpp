class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        vector<vector<int>>ans;
        while(nums.size()>0){
            set<int>st;
            for(auto it=nums.begin();it!=nums.end();){
                int val=*it;
                if(st.find(val)==st.end()){
                    st.insert(val);
                    nums.erase(it);
                }
                else
                    it++;
            }
            ans.push_back(vector<int>(st.begin(),st.end()));
        }
        return ans;
    }
};