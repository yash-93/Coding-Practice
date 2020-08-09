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
    void calcSum(TreeNode* node, int tSum, int sum, int &count){
        if(tSum+node->val == sum) { count++;}
        if(node->left != NULL)
            calcSum(node->left, tSum+node->val, sum, count);
        if(node->right != NULL)
            calcSum(node->right, tSum+node->val, sum, count);
    }

    void dfs(TreeNode* root, int sum, int &count){
        queue<TreeNode*> q;
        q.push(root);
        TreeNode* temp;
        while(!q.empty()){
            temp = q.front();
            q.pop();
            calcSum(temp, 0, sum, count);
            if(temp->left != NULL)
                q.push(temp->left);
            if(temp->right != NULL)
                q.push(temp->right);
        }
    }
    
public:
    int pathSum(TreeNode* root, int sum) {
        if(root == NULL) return 0;
        int count = 0;
        dfs(root, sum, count);
        return count;
    }
};