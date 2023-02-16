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
    int f(TreeNode* root)
    {
        if(root== NULL) return 0;
        int lr=1+f(root->left);
        int rr=1+f(root->right);
        
        return max(lr,rr);
    }
    int maxDepth(TreeNode* root) {
        if(!root) return 0;
        return f(root);
        
    }
};