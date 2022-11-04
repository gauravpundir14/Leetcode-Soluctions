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
    void inorder(TreeNode* root, int &cnt){
        if(!root) return;
        cnt++; //increament the counter
        inorder(root->left, cnt); //traversing left subtree
        inorder(root->right, cnt); //traversing right subtree
    }
    
    int countNodes(TreeNode* root) {
        int cnt = 0;
        inorder(root, cnt); //we are using inorder traversal here
        return cnt; //returning the counter
    }
};
