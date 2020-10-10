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
    int constructBST(vector<int> &preorder, int n, int pos, TreeNode *curr, int l, int r){
        if(pos==n || preorder[pos] < l || preorder[pos] > r) return pos;
        
        if(preorder[pos] < curr->val){
            curr->left = new TreeNode(preorder[pos]);
            pos++;
            pos = constructBST(preorder,n,pos,curr->left,l,curr->val - 1);
        }
        
        if(pos==n || preorder[pos] < l || preorder[pos] > r) return pos;
        
        curr->right = new TreeNode(preorder[pos]);
        pos++;
        pos = constructBST(preorder,n,pos,curr->right,curr->val + 1,r);
        return pos;
    }

public:
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int n = preorder.size();
        if(n==0) return NULL;
        
        TreeNode *root = new TreeNode(preorder[0]);
        if(n==1) return root;
        
        constructBST(preorder,n,1,root,INT_MIN,INT_MAX);
        return root;
    }
};