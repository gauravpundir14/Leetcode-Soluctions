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
private:
    int binarytoInteger(vector<int> bin){
        int ans = 0;
        int size = bin.size()-1;
        for(int i = 0 ; i < bin.size() ; i++){
            if(bin[i] == 1){
            ans += pow(2,size);
            }
            size--;
        }
        return ans;
    }
    
    void solve(TreeNode* root , vector<int> path , int &sum){
        //base case
        if(root == NULL)
            return;
        
        path.push_back(root->val);
        
        if(root->left == NULL && root->right == NULL){
            int x = binarytoInteger(path);
            sum += x;
        }
        
        solve(root->left , path , sum);
        solve(root->right , path , sum);
        
        path.pop_back();
    }
    
public:
    int sumRootToLeaf(TreeNode* root) {
        vector<int> path;
        int sum = 0;
        solve(root , path , sum);
        return sum;
    }
};