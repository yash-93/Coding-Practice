#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int res = 0;
    void DFS(vector<vector<int>>& graph, int index, vector<bool>& visited)
    {
        vector<int> v = graph[index];
        visited[index] = true;
        if(v.size()!=0)
            for(int i = 0; i<v.size(); i++){
                if(!visited[v[i]])
                {
                    for(auto it=graph[v[i]].begin(); it!=graph[v[i]].end(); it++){
                        if(*it == 0){
                            visited[v[i]] = true;
                            break;
                        }
                    }
                }

                if(!visited[v[i]])
                {
                    res++;
                    DFS(graph, v[i], visited);
                }
            }
    }

    int minReorder(int n, vector<vector<int> >& connections) {
        vector<vector<int> > adj_list(n);
        vector<bool> visited(n, false);

        for(int i=0; i<connections.size(); i++){
            adj_list[connections[i][0]].push_back(connections[i][1]);
        }

        for(int i=0; i<n; i++){
            if(!visited[i]){
                DFS(adj_list, i, visited);
            }
        }

        return res;
    }
};

int main(){
    //int n = 5;
    //vector<vector<int> > connections = {{1,0},{1,2},{3,2},{3,4}};
    //int n = 6;
    //vector<vector<int> > connections = {{0,1},{1,3},{2,3},{4,0},{4,5}};
    int n = 3;
    vector<vector<int> > connections = {{1,2},{2,0}};
    Solution s;
    cout << s.minReorder(n, connections);
    return 0;
}
