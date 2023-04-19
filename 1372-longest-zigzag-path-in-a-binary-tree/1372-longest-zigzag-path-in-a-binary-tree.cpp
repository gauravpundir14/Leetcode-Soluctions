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
    int res = 0;

    void solve(TreeNode* node, bool goLeft, int currPathLen) {
        if (!node) return;
        res = max(res, currPathLen);
        if (goLeft) {
            solve(node->left, 0, currPathLen + 1);
            solve(node->right, 1, 1);
        } else {
            solve(node->right, 1, currPathLen + 1);
            solve(node->left, 0, 1);
        }
    }

    int longestZigZag(TreeNode* root) {
        solve(root, 1, 0);
        solve(root, 0, 0);
        return res;
    }
};