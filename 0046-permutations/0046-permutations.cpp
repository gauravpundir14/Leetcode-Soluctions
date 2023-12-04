class Solution {
  private:
void helper( vector<int>&v ,  vector<int>&temp  , vector<vector<int>>&ans ,vector<int>&visited ){
    if(temp.size() == v.size()){
        ans.push_back(temp);
        return;
    }
    for(int i = 0; i<v.size(); i++){
           if(!visited[i]){
            temp.push_back(v[i]);
            visited[i] = true;
            helper( v,temp,ans,visited);
            temp.pop_back();
            visited[i] =false;
           }
    }
}
public:
    vector<vector<int>> permute(vector<int>& v) {
      int n = v.size();
      vector<vector<int>>ans;
      vector<int>visited(n , false);
      vector<int>temp;
        
      helper( v , temp , ans , visited);
      return ans;
    }
};