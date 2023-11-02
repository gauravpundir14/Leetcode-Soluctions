class Solution {
public:
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
         int n=graph.size();
        vector<int> rev[n];
        vector<int> indegree(n,0);
        for(int i=0;i<n;i++)
        {
            for(auto it : graph[i])
            {
               rev[it].push_back(i);
                indegree[i]++;
            }
        }
        queue<int> q;
        for(int i=0;i<n;i++)
        {
            if(indegree[i]==0)
            {
                q.push(i);
            }
        }
         vector<int> ans;
        while(!q.empty())
        {
            int node=q.front();
            ans.push_back(node);
            q.pop();
            for(auto i:rev[node])
            {
                indegree[i]--;
                if(indegree[i]==0) q.push(i);
                
            }
            
            
        }
        
        sort(ans.begin(),ans.end());
        return ans;
        
    }
};