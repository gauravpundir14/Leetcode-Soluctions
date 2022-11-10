/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode * ans;
    void find(TreeNode* root, int val)
    {
        if(root == NULL)
            return;
        if(root->val == val)
        {
            ans = root;
            return;
        }
        find(root->right,val);
        find(root->left,val);
    }
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
            find(cloned, target->val);
        return ans;
    }
};