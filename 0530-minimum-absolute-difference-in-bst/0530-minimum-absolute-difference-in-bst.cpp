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
    
    int getMinimumDifference(TreeNode* root) {
        if(!root) return 0 ;
        vector<int> ans;
        int min=999;
        inorder(root,ans);
        sort(ans.begin(),ans.end());
        
        if(ans.size()==1) return ans[0];
        else
        {
            for(int i=1;i<ans.size();i++)
            {
                if(ans[i]-ans[i-1]<min)
                {
                    min=ans[i]-ans[i-1];
                }
            }
            return min;
        }
            
        
        
    }
};