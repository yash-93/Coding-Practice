class Solution {
    struct Node {
        TreeNode* n;
        int x, y;
    };
public:
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        vector<vector<int>> ans;
        map<int, map<int, vector<int>>> mp;
        queue<Node*> q;
        q.push(new Node{root, 0, 0});
        while(!q.empty()) {
            Node* node = q.front();
            q.pop();
            if(node->n->left) q.push(new Node{node->n->left, node->x - 1, node->y + 1});
            if(node->n->right) q.push(new Node{node->n->right, node->x + 1, node->y + 1});
            mp[node->x][node->y].push_back(node->n->val);
        }
        for(pair<int, map<int, vector<int>>> p1 : mp) {
            ans.push_back({});
            for(pair<int, vector<int>> p2 : p1.second) {
                vector<int> v = p2.second;
                sort(v.begin(), v.end());
                ans.back().insert(ans.back().end(), v.begin(), v.end());
            }
        }
        return ans;
    }
};

/*
class Solution {
public:
    
    void bfs(TreeNode* root, map<int, vector<pair<int,int>>> &verticalSimilarNodes, int x, int y){
        verticalSimilarNodes[x].push_back(make_pair(root->val,y));
        if(root->left != NULL)
            bfs(root->left, verticalSimilarNodes, x-1, y-1);
        if(root->right != NULL)
            bfs(root->right, verticalSimilarNodes, x+1, y-1);
    }
    
    /*bool compare(pair<int,int> p1, pair<int,int> p2){
        return p1.second == p2.second && p1.first < p2.first;
    }*/
    
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        map<int, vector<pair<int,int>>> verticalSimilarNodes;
        bfs(root, verticalSimilarNodes, 0, 0);
        int size = verticalSimilarNodes.size();
        vector<vector<int>> result;
        vector<int> temp;
        for(auto it=verticalSimilarNodes.begin(); it!=verticalSimilarNodes.end(); it++){
            sort(it->second.begin(), it->second.end(), [](pair<int,int>& p1, pair<int,int>& p2){
                return p1.second == p2.second && p1.first < p2.first;
            });
            //cout << it->first << " : ";
            for(auto itr=it->second.begin(); itr!=it->second.end(); itr++){
                //cout << "(" << itr->first << "," << itr->second <<"), ";
                temp.push_back(itr->first);
            }
            //cout << endl;
            result.push_back(temp);
            temp.clear();
        }
        return result;
    }
}; 
*/