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
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        if(inorder.size() != postorder.size())
            return NULL;
        map<int,int>inmap;
        for(int i=0;i<inorder.size();i++)
        {
            inmap[inorder[i]]=i;
        }
        
        return buildTreep(inorder,0,inorder.size()-1,postorder,0,postorder.size()-1,inmap);
        
    }
    
    TreeNode * buildTreep(vector<int>& inorder,int is,int ie, vector<int>& postorder,int ps,int pe, map<int,int> & inmap)
    {
        if(is>ie || ps>pe) return NULL;
        TreeNode *root=new TreeNode(postorder[pe]);
        
        int inr=inmap[postorder[pe]];
        int nl=inr-is;
        
        root->left=buildTreep(inorder,is,inr-1,postorder,ps,ps+nl-1,inmap);
        root->right=buildTreep(inorder,inr+1,ie,postorder,ps+nl,pe-1,inmap);
        return root;
    }
};