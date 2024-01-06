class Solution {
public:
    int search(vector<vector<int>>& rides,int index)
    {    int result=rides.size();
         int low=index+1,high=rides.size()-1;
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(rides[mid][0]>=rides[index][1])
            {
                result=mid;
                high=mid-1;
            }
            else
                low=mid+1;
        }
        return result;
    }
    long long solve(int index,vector<vector<int>>& rides,vector<long long> &dp)
    {
        if(index>=rides.size())return 0;
        if(dp[index]!=-1)return dp[index];
        int i=search(rides,index);
        
        long long pick=rides[index][1]-rides[index][0]+rides[index][2]+solve(i,rides,dp);
        long long notpick=solve(index+1,rides,dp);
        return dp[index]=max(pick,notpick);
    }
    long long maxTaxiEarnings(int n, vector<vector<int>>& rides) {
        vector<long long> dp(rides.size()+1,-1);
        sort(rides.begin(),rides.end());
        return solve(0,rides,dp);
    }
};