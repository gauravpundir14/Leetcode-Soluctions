class Solution {
public:
    vector<vector<int>> ans;
    void solve(int ind,vector<int>& candidates,vector<int> &temp,int target)
    { 
        if(target==0) 
        {ans.push_back(temp) ;
        return ;}
        if(target < 0)
            return;
        if(ind==candidates.size()) return ;
       
      
        solve(ind+1,candidates,temp,target);
          temp.push_back(candidates[ind]);
        
        solve(ind,candidates,temp,target-candidates[ind]);
        temp.pop_back();
        
        
        
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
           ans.clear(); 
        
        vector<int> temp; 
        solve(0, candidates, temp, target); 
        
        return ans;
        
    }
};