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
    TreeNode * makeTree(vector<int> & ans)
    {   TreeNode* root=new TreeNode(ans[0]);
         TreeNode* root1=root;
        for(int i=1;i<ans.size();i++)
        {   TreeNode* temp=new TreeNode(ans[i]);
            root->right=temp;
            root->left=NULL;
            root=temp;
        }
     root->right=NULL;
     root->left=NULL;
     
     return root1;
    }
    
    TreeNode* increasingBST(TreeNode* root) {
        if(!root) return 0;
        vector <int> ans;
        inorder(root,ans);
        sort(ans.begin(),ans.end());
        TreeNode * root1=makeTree(ans);
        return root1;
        
    }
};