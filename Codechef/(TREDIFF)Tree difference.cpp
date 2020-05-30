#include <bits/stdc++.h>
using namespace std;

vector<bool> visited;

void BFS(vector<int> adj_list[], int initial, int dest){
    queue<int> path;
    queue<int> q;
    q.push(initial);
    visited[initial] = true;
    bool stop = false;
    while(!q.empty()){
        int curr = q.front();
        path.push(curr);
        q.pop();

        for (auto it = adj_list[curr].begin(); it!=adj_list[curr].end(); it++)
        {
            if(!visited[*it] && *it!=dest){
                q.push(*it);
                visited[*it] = true;
            }else if(!visited[*it] && *it==dest){
                path.push(*it);
                stop = true;
                break;
            }
        }
        if(stop)
            break;

    }

    while(!path.empty()){
        cout << path.front() << " ";
        path.pop();
    }
}

void test(){
    int N, Q, *A; cin >> N >> Q;
    visited.assign(N, false);
    A = new int[N+1];
    for(int i=1; i<=N; i++){
        cin >> A[i];
    }

    int u,v;
    vector<int> adj_list[N+1];
    //vector<pair<int,int> > nodes;
    for(int i=1; i<=N-1; i++){
        cin >> u >> v;
        //nodes.push_back(make_pair(u,v));
        adj_list[u].push_back(v);
        adj_list[v].push_back(u);
    }

    vector<pair<int,int> > queries;
    int a,b;
    for(int i=1; i<=Q; i++){
        cin >> a >> b;
        queries.push_back(make_pair(a,b));
    }

    /*for(int i=1; i<=N; i++){
        for(auto it=adj_list[i].begin(); it!=adj_list[i].end(); it++){
            cout << *it << " ";
        }
        cout<<endl;
    }

    for(int i=0; i<Q; i++){
        cout << queries[i].first << "," << queries[i].second << "=>";
    }*/
    //BFS(adj_list, 5, 6);
    for(int i=0; i<Q; i++){
        BFS(adj_list, queries[i].first, queries[i].second);
        cout<<endl;
    }

}

int main(){
    //ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    //int T; cin >> T;
    //while(T--)
        test();

    return 0;
}

