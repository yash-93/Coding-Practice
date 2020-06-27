#include <bits/stdc++.h>
using namespace std;

vector<bool> visited;

void DFS(vector<int> adj_list[], int u){
    visited[u] = true;
    cout << u << " ";

    for (auto it = adj_list[u].begin(); it!=adj_list[u].end(); it++)
    {
        if(!visited[*it])
            DFS(adj_list, *it);
    }
}

int getMinConnectionChange(vector<int> connection) {
    visited.assign(connection.size()+1, false);
    int res = 0;
    vector<int> adj_list[connection.size()+1];
    bool terminal = false;
    for(size_t i=0; i<connection.size(); i++){
        if(i+1 == connection[i]) terminal = true;
        adj_list[i+1].push_back(connection[i]);
    }

    /*for(int i=0; i<connection.size(); i++){
            cout << i+1 << " : ";
        for(auto it=adj_list[i+1].begin(); it!=adj_list[i+1].end(); it++){
            cout << *it << " ";
        }
        cout << endl;
    }*/
    if(terminal){
        for (size_t i=0; i<connection.size(); i++){
            if (visited[i+1] == false){
                DFS(adj_list, i+1);
                res++;
                cout << "\n";
            }
        }
        res -= 1;
    }

    return res;
}

int main(){
    //vector<int> connection{2,3,4,1,5};
    //vector<int> connection{1,2,3,4};
    vector<int> connection{2,3,4,5,1,7,8,9,10,6};
    cout << getMinConnectionChange(connection);
    return 0;
}
