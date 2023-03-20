class Solution 
{
public:
    int minimumRounds(vector<int>& tasks) 
    {
        unordered_map<int,int> mp;
        for(auto &it : tasks)
            mp[it]++;

        int rounds=0;
        for(auto it:mp)
        {
            if(it.second<2) return -1;
            if(it.second%3==0) rounds += it.second/3; 
            else rounds += it.second/3 + 1; 
        }
        return rounds;
        
    }
};