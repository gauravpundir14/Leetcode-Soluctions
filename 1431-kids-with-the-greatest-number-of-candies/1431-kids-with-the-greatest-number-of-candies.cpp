class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> ans;
        int maxi=INT_MIN;
        for(int i=0;i<candies.size();i++)
        {
            if(candies[i]>maxi)
            {
                maxi=candies[i];
            }
        }
        cout<<maxi;
        for(int i=0;i<candies.size();i++)
        {
            if(candies[i]+extraCandies>=maxi)ans.push_back(1);
            else ans.push_back(0);
        }
       return ans; 
    }
};