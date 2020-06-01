#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    vector<string> visited;

    double calcSum(vector<string> vis, map<string,vector<pair<string,double> > > adj){
        double sum = 1;

        for(int i=0; i<vis.size()-1; i++){
            for(auto it=adj[vis[i]].begin(); it!=adj[vis[i]].end(); it++){
                if(it->first == vis[i+1]){
                    sum *= it->second;
                    break;
                }
            }
        }

        return sum;
    }

    void BFS(string src, string dest, map<string,vector<pair<string,double> > > adj){
        queue<string> q;
        visited.push_back(src);
        q.push(src);
        bool breakVar = false;
        while(!q.empty()){
            string curr = q.front();
            q.pop();

            for(auto it=adj[curr].begin(); it!=adj[curr].end(); it++){
                string ele = it->first;
                if(find(visited.begin(), visited.end(), ele) == visited.end()){
                    visited.push_back(ele);
                    q.push(ele);
                    if(ele==dest){
                        breakVar = true;
                        break;
                    }
                }
            }
            if(breakVar){
                break;
            }
        }

    }

    vector<double> calcEquation(vector<vector<string>>& equations, vector<double>& values, vector<vector<string>>& queries){
        vector<double> res;
        map<string,vector<pair<string,double> > > adj;

        for(int i=0; i<equations.size(); i++){
            adj[equations[i][0]].push_back(make_pair(equations[i][1], values[i]));
            adj[equations[i][1]].push_back(make_pair(equations[i][0], 1/values[i]));
        }

        for(auto it=adj.begin(); it!=adj.end(); it++){
            cout << it->first << " : ";
            for(auto itr=it->second.begin(); itr!=it->second.end(); itr++){
                cout << "(" << itr->first << "," << itr->second << "), ";
            }
            cout << endl;
        }
        //cout << adj["a"][0].first;

        for(int i=0; i<queries.size(); i++){
            visited = {};
            if(adj[queries[i][0]].size() == 0 || adj[queries[i][1]].size() == 0)
                res.push_back(-1);
            else if(queries[i][0] == queries[i][1])
                res.push_back(1);
            else{
                BFS(queries[i][0],queries[i][1], adj);

                res.push_back(calcSum(visited, adj));
            }

            cout <<endl;
            for(auto i:visited)
                cout << i << " ";
        }

        return res;
    }
};

int main(){
    vector<vector<string> > equations = {{"a", "b"}, {"b", "c"}};
    vector<double> values = {2.0, 3.0};
    vector<vector<string> > queries = {{"a", "c"}, {"b", "a"}, {"a", "e"}, {"a", "a"}, {"x", "x"}};


    vector<double> res(queries.size());
    Solution s;
    res = s.calcEquation(equations, values, queries);
    cout << endl;
    cout << res.size() << endl;
    for(auto i:res)
        cout << i << " ";

    return 0;
}
