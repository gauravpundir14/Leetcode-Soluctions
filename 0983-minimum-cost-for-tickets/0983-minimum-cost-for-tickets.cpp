class Solution {
                  
    int helper(vector<int>& days, vector<int>& costs, int n, int ind, vector<int> &memo){
                                    // base condition
   
    if(ind>=n) return 0; 

                        
   if(memo[ind]!=-1) return memo[ind];


    int one= costs[0]+ helper(days, costs, n, ind+1, memo);

    int pointer;
    for( pointer=ind; pointer<n and days[pointer] < days[ind]+7; pointer++ );
     int seven=  costs[1]+ helper(days, costs, n, pointer, memo);
     for( pointer=ind; pointer<n and days[pointer] < days[ind]+30; pointer++ );
    int thirty= costs[2]+ helper(days, costs, n, pointer, memo);

    return memo[ind]= min({one, seven, thirty});
    }
public:
    int mincostTickets(vector<int>& days, vector<int>& costs) {
        int n= days.size();
        
        vector<int> memo(n, -1);
        return helper(days, costs,n, 0, memo);
        
    }
};