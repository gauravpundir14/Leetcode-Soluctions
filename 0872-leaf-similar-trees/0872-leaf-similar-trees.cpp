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
    void inorder(TreeNode* root,vector<int> &ans )
    {
        if(!root) return ;
        if(root->left==NULL and root->right==NULL)
            ans.push_back(root->val);
        
        inorder(root->left,ans);
        inorder(root->right,ans);
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        bool flag=true;
        vector<int> ans1;
        vector<int> ans2;
        inorder(root1,ans1);
        inorder(root2,ans2);
        
        int size= ans1.size()>ans2.size() ? ans1.size():ans2.size();
        
       for(int i=0;i<size;i++)
       {
           if(ans1[i]!=ans2[i])
           {
               flag=false;
           }
       }
        
        return flag;
        
    }
};