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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        stack<TreeNode *> s1;
        stack<TreeNode *> s2;
        vector<vector<int>> trav;
        
        if(root == NULL)
            return trav;
        
        s1.push(root);
        TreeNode *node;
        vector<int> temp;
        while(!s1.empty() || !s2.empty()){
            while(!s1.empty()){
                node = s1.top();
                s1.pop();
                temp.push_back(node->val);
                if(node->left)
                    s2.push(node->left);
                if(node->right)
                    s2.push(node->right);
            }
            if(!temp.empty())
                trav.push_back(temp);
            temp.clear();
            while(!s2.empty()){
                node = s2.top();
                s2.pop();
                temp.push_back(node->val);
                if(node->right)
                    s1.push(node->right);
                if(node->left)
                    s1.push(node->left);
            }
            if(!temp.empty())
                trav.push_back(temp);
            temp.clear();
        }
        return trav;
    }
};