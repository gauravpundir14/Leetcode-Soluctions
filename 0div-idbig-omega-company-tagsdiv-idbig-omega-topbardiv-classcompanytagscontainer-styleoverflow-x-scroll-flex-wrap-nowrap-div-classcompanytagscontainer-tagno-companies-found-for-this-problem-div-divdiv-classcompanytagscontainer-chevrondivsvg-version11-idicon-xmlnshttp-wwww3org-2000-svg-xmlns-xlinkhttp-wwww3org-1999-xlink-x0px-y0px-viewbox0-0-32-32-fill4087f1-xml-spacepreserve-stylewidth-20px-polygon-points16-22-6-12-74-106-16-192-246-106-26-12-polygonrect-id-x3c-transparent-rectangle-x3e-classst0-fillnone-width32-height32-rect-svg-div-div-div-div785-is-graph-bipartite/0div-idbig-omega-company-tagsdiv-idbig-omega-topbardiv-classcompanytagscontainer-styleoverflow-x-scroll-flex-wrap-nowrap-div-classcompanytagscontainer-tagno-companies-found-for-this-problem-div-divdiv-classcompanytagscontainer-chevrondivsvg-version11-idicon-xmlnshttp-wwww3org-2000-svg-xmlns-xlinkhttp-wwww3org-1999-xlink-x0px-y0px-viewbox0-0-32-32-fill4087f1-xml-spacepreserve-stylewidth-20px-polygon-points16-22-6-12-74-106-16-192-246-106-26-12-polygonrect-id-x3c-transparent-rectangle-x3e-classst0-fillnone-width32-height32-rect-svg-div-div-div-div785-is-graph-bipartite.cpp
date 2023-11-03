class Solution {
public:
    bool dfs(int node, int col, int color[], vector<int> adj[]) {
        color[node] = col; 
        
      
        for(auto it : adj[node]) {
          
            if(color[it] == -1) {
                if(dfs(it, !col, color, adj) == false) return false; 
            }
            else if(color[it] == col) {
                return false; 
            }
        }
        
        return true; 
    }
    bool isBipartite(vector<vector<int>>& graph) {
        int n=graph.size();
        int color[n];
        vector<int>adj[n];
         for(int i=0;i<n;i++){
            for(auto it:graph[i]){
                adj[i].push_back(it);
            }
        }
	    for(int i = 0;i<n;i++) color[i] = -1; 
	    
	    for(int i = 0;i<n;i++) {
	        if(color[i] == -1) {
	            if(dfs(i, 0, color, adj) == false) 
	                return false; 
	        }
	    }
	    return true; 
    }
};