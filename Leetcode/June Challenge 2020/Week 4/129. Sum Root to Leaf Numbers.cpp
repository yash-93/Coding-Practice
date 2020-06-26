class Solution {
public:
    string s = "";
    int sum = 0;
    int size;
    void dfs(TreeNode* root){
        s.append(to_string(root->val));
        if(root->left == NULL && root->right == NULL){
            sum += stoi(s);
        }
        if(root->left!=NULL){
            dfs(root->left);
        }
        size = s.size()-1;
        if(root->right!=NULL){
            dfs(root->right);
        }
        size = s.size()-1;
        s.resize(size);
    }
    
    
    int sumNumbers(TreeNode* root) {
        if(root == NULL){
            return 0;
        }
        dfs(root);
        return sum;
    }
};