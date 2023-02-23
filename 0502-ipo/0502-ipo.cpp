class Solution {
public:

    int findMaximizedCapital(int k, int w, vector<int>& profits, vector<int>& capital) {
        
        priority_queue<pair<int,int>>mx;
        priority_queue<pair<int,int> ,vector<pair<int,int>>, greater<pair<int,int>>>mn;

        for(int i=0;i<capital.size();++i)
            mn.push({capital[i], profits[i]});   
    
        while(k > 0)
        {
           while(!mn.empty() && mn.top().first<=w)
           {
               auto p = mn.top();
               mn.pop();
               mx.push({p.second, p.first});
           }
           if(!mx.empty())
           {
               w += mx.top().first;
               mx.pop();
               k--;
           }
           else break;  
        }

        return w;

    }
};