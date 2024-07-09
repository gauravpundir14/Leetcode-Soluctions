class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        long long  totaltime=0;
        int currentTime=0;
        
        for(auto i:customers)
        {
            int arrival=i[0];
            int over=i[1];
        
        
        if(arrival>currentTime)
        {
            currentTime=arrival;
        }
        
        int waitTime=currentTime+over-arrival; 
        totaltime+=waitTime;
        currentTime+=over;
        }
        return static_cast<double>(totaltime)/customers.size(); 
    }
};