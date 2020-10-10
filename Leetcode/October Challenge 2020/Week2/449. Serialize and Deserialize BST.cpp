/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Codec {
private:
    void preOrder(TreeNode *root, string &s){
        if(root == NULL)
            return;
        string val = to_string(root->val);
        s.append(val);
        s.append(",");
        preOrder(root->left,s);
        preOrder(root->right,s);
    }
    
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

    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        string s = "";
        preOrder(root,s);
        cout << s << endl;
        return s;
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        vector<int> preorder;
        string temp = "";
        for(auto i:data){
            if(i == ','){
                preorder.push_back(stoi(temp));
                temp = "";
                continue;
            }
            temp.push_back(i);
        }
        
        int n = preorder.size();
        if(n==0) return NULL;

        TreeNode *root = new TreeNode(preorder[0]);
        if(n==1) return root;
        
        constructBST(preorder,n,1,root,INT_MIN,INT_MAX);
        return root;
    }
};

// Your Codec object will be instantiated and called as such:
// Codec* ser = new Codec();
// Codec* deser = new Codec();
// string tree = ser->serialize(root);
// TreeNode* ans = deser->deserialize(tree);
// return ans;