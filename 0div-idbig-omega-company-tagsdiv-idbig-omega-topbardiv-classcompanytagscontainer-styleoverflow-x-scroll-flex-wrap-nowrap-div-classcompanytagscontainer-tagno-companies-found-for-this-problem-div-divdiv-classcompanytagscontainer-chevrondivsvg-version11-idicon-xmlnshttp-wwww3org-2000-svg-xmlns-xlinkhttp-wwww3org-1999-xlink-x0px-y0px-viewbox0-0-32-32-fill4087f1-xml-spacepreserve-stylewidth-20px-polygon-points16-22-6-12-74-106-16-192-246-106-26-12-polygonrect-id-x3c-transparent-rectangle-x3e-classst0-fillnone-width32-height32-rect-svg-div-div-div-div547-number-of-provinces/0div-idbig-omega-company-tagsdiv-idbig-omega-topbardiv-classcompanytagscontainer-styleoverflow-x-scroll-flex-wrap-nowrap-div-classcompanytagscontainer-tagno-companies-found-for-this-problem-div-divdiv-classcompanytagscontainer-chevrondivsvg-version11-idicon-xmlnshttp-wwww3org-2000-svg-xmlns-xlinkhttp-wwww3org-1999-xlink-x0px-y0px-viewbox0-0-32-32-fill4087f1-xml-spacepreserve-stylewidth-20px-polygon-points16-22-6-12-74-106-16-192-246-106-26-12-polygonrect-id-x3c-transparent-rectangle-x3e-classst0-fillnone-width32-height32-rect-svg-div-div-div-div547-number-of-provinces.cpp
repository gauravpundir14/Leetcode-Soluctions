class Solution {
public:
	int findCircleNum(vector<vector<int>>& isConnected) {
		int V=isConnected.size();
		vector<int>adjls[V];
		for(int i=0; i<V; i++){
			for(int j=0; j<V; j++){
				if(isConnected[i][j]==1 && i!=j){
					adjls[i].push_back(j);
					adjls[j].push_back(i);
				}
			}
		}
		vector<int>v(V, 0);
		int cnt=0;
		for(int i=0; i<V; i++){
			if(v[i]==0){
				cnt++;
				queue<int>q;
				q.push(i);
				while(!q.empty()){
					int ft=q.front();
					q.pop();
					for(auto it: adjls[ft]){
						if(!v[it]){
							v[it]=1;
							q.push(it);
						}
					}
				}
			}
		}
		return cnt;
	}
};