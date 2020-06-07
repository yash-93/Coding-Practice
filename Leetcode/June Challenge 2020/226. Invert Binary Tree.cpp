#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if(root == NULL)
            return NULL;

        TreeNode *right = invertTree(root->right);
        TreeNode *left = invertTree(root->left);
        root->left = right;
        root->right = left;
        return root;
    }
};
