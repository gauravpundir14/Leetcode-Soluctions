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
    int maxLevelSum(TreeNode* root) {
        queue<TreeNode*>q;
        q.push(root);
        int level=0;
        int mx= INT_MIN;
        int level_number;
        while(q.size()){
         {
                int g=q.size();
                level++;
               int sum=0;
                while(g--)
            { auto x=q.front();
                  q.pop();
                 sum=sum+x->val;
                 if(x->left)
                 {
                     q.push(x->left);
                 }
                 if(x->right)
                 {
                     q.push(x->right);
                 }
            }
                if(sum>mx)
                {
                    mx=sum;
                    level_number=level;
                }
                
        } }
            return level_number;
    }
};