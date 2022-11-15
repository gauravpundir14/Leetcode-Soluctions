/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    unordered_map<int,int> ump;
    void dfs(TreeNode * root)
    {
        if(!root) return ;
        dfs(root->left);
        ++ump[root->val];
        dfs(root->right);
        
    }
    vector<int> findMode(TreeNode* root) {
        vector<int> ans;
        int maxi=0;
        if(!root) return ans;
        dfs(root);
        for(auto x : ump)
        {
            maxi=max(maxi,x.second);
        }
        for(auto x : ump)
        {
            if( x.second == maxi) 
                ans.push_back(x.first); 
        }
        
        return ans;
        
    }
};