class Solution {
public:
    int heightChecker(vector<int>& h) {
        vector<int> ans;
        int c=0;
        for(int i:h)
        {
            ans.push_back(i);
        }
            
        sort(ans.begin(),ans.end());
        for(int i=0;i<h.size();i++)
        {
            if(ans[i]!=h[i])
            {
                c++;
            }
        }
        return c;
    }
};