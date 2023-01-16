class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        if(intervals.size()==0) return intervals;
        vector<int> newinterval;
        vector<vector<int>> mergedinterval;
        
        sort(intervals.begin(),intervals.end());
        newinterval=intervals[0];
        for(auto it :intervals)
        {
            if(it[0]<=newinterval[1])
            {
                newinterval[1]=max(it[1],newinterval[1]);
            }
            
            else
            {
                mergedinterval.push_back(newinterval);
                newinterval=it;
            }
        }
        mergedinterval.push_back(newinterval);
        return mergedinterval;
    }
};