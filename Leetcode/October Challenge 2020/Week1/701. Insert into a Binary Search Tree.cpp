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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if(root == NULL){
            TreeNode *node = new TreeNode(val);
            return node;
        }
        
        TreeNode *temp = root;
        
        while(1){
            if(temp->val < val){
                if(temp->right != NULL){
                    temp = temp->right;
                }
                else{
                    TreeNode *node = new TreeNode(val);
                    temp->right = node;
                    break;
                }
            }else{
                if(temp->left != NULL){
                    temp = temp->left;
                }
                else{
                    TreeNode *node = new TreeNode(val);
                    temp->left = node;
                    break;
                }
            }
        }
        
        return root;
    }
};