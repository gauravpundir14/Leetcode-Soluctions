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
    int solve(TreeNode*root,int &res){
        if(!root)return 0;
        int left=solve(root->left,res);  
        int right=solve(root->right,res); 
        res+=abs(right-left);             
        return left+right+root->val;      
    }
    int findTilt(TreeNode* root) {
        if(!root)return 0;
        int res=0;
        solve(root,res);
        return res;
    }
};