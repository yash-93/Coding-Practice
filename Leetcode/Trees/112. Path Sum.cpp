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
    int traverse(TreeNode* root, int sum){
        if(root->left == NULL && root->right == NULL && sum-root->val == 0)
            return 1;
        
        if(root->left != NULL)
            if(traverse(root->left, sum-root->val))
                return 1;
        
        if(root->right != NULL)
            if(traverse(root->right, sum-root->val))
                return 1;
        
        return 0;
    }
    
    bool hasPathSum(TreeNode* root, int sum) {
        if(root == NULL)
            return 0;
        if(traverse(root,sum))
            return true;
        else
            return false;
    }
};