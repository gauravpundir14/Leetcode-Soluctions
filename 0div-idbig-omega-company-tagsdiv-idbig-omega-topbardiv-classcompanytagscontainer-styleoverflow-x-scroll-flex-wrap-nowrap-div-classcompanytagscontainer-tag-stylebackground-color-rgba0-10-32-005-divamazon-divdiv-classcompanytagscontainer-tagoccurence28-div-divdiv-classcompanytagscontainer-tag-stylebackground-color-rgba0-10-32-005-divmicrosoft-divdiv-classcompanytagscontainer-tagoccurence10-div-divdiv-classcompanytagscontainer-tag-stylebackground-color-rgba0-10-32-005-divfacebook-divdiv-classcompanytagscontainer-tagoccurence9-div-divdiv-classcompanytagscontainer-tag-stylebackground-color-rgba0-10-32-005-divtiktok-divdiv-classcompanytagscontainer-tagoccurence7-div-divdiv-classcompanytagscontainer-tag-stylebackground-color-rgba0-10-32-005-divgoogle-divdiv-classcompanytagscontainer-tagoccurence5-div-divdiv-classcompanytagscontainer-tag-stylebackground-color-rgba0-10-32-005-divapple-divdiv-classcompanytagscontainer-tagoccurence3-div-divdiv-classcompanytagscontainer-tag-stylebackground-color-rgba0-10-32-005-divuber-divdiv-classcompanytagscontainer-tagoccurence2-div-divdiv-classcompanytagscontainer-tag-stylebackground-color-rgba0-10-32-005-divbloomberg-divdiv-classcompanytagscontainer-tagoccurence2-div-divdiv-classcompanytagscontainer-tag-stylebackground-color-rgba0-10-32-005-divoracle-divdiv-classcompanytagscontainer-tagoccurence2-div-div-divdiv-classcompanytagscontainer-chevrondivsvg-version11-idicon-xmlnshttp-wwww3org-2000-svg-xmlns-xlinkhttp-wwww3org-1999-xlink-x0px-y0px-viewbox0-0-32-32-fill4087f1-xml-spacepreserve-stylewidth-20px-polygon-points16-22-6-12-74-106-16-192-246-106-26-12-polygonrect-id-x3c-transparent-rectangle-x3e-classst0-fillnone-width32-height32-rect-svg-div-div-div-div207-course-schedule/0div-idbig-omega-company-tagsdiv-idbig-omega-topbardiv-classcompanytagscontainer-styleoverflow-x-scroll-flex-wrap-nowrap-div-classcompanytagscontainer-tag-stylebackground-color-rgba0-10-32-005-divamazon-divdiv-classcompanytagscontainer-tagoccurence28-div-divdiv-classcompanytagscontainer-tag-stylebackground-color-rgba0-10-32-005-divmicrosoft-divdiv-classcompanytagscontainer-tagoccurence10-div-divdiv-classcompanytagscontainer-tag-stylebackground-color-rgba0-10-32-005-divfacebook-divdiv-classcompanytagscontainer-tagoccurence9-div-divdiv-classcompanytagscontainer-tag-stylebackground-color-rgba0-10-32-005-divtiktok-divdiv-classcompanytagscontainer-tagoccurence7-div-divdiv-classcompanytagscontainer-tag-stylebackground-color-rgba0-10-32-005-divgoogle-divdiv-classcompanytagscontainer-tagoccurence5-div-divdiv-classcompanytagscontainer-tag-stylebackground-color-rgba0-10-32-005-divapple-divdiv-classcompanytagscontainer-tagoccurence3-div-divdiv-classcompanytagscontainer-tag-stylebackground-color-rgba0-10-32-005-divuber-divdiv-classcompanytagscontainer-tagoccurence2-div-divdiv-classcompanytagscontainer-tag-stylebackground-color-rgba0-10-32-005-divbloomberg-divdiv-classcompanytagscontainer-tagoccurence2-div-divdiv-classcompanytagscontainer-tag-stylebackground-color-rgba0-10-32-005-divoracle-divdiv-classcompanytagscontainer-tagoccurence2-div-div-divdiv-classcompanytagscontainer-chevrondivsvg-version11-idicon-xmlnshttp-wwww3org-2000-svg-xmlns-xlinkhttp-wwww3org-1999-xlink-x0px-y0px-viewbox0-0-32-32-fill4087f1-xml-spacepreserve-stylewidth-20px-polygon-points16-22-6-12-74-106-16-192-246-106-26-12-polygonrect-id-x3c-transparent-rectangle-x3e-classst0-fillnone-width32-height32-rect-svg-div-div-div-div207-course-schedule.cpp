class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& pre) {
        int n=numCourses;
        vector<int> indegree(n,0);
        vector<int> adj[n];
        for(auto i:pre)
        {
            adj[i[0]].push_back(i[1]);
            indegree[i[1]]++;
            
        }
        
        queue<int>q;
        for(int i=0;i<n;i++)
        {
            if(indegree[i]==0)
            {
                q.push(i);
            }
        }
        
        vector<int> ans;
         while(!q.empty()){
            auto t=q.front();
            ans.push_back(t);
            q.pop();


            for(auto x: adj[t]){
                indegree[x]--;
                if(indegree[x]==0){
                    q.push(x);
                }
            }
        }
        return ans.size()==n;
    }
};