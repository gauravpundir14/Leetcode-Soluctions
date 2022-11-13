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
    void inorder(TreeNode* root, vector<int> &ans)
{
if(!root) return;

    ans.push_back(root->val);
    inorder(root->left,ans);
    inorder(root->right,ans);
    
}
    int findSecondMinimumValue(TreeNode* root) {
        if(!root) return -1;
        vector<int> ans;
        inorder(root,ans);
        
        sort(ans.begin(),ans.end());
        ans.erase(unique(ans.begin(),ans.end()),ans.end());
        if(ans.size()==1) return -1;
        else return ans[1];
        
    }
};