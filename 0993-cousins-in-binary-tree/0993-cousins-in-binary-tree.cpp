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
    
    int depth_x = 0;
    int depth_y = 0;
    int parent_x = -1;
    int parent_y = -1;
    
    void dfs(TreeNode* root, int x, int y, int depth, int parent)
    {
        if(root == NULL)
            return;
        if(root -> val == x)
        {
            depth_x = depth;
            
            parent_x = parent;
        }
        if(root -> val == y)
        {
            depth_y = depth;
            
            parent_y = parent;
        }
        dfs(root -> left, x, y, depth + 1, root -> val);
        dfs(root -> right, x, y, depth + 1, root -> val);
    }
    
    bool isCousins(TreeNode* root, int x, int y) {

        dfs(root, x, y, 0, -1);
        if(depth_x != depth_y)
            return false;
        
        if(depth_x == depth_y)
            return parent_x != parent_y;
        
        return false;
    }
};