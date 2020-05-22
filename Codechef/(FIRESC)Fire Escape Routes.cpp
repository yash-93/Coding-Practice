#include <bits/stdc++.h>
using namespace std;

#define mod 1000000007

vector<bool> visited;

long long int routes = 0, len = 0;
long long int route_cap_ways = 1;

void add_edge(vector<long long int> adj_list[], long long int u, long long int v)
{
    adj_list[u].push_back(v);
    adj_list[v].push_back(u);
}

void printGraph(vector<long long int> adj_list[], long long int V){
    long long int v, w;
    for (long long int u = 1; u <= V; u++)
    {
        cout << "Node " << u << ": ";
        for (auto it = adj_list[u].begin(); it!=adj_list[u].end(); it++)
        {
            v = *it;
            cout << v << "->";
        }
        cout << "\n";
    }
}

void DFS(vector<long long int> adj_list[], long long int u){
    len++;
    visited[u] = true;

    for (auto it = adj_list[u].begin(); it!=adj_list[u].end(); it++)
    {
        if(!visited[*it])
            DFS(adj_list, *it);
    }
}

int main(){
    int T; cin >> T;
    long long int N, M;
    while (T--)
    {
        cin >> N >> M;
        visited.assign(N+1, false);
        vector<long long int> adj_list[N+1];
        long long int u, v;
        for (long long int i=1; i<=M; i++){
            cin >> u >> v;
            add_edge(adj_list, u, v);
        }

        vector<long long int> component_len;
        for (long long int i=1; i<=N; i++){
            if (visited[i] == false){
                ++routes;
                DFS(adj_list, i);
                component_len.push_back(len);
                len = 0;
            }
        }

        for(auto it=component_len.begin(); it!=component_len.end(); it++){
            route_cap_ways = (route_cap_ways * *it) % mod;
        }
        cout << routes << " " << route_cap_ways << "\n";
        routes = 0;
        route_cap_ways = 1;

    }
    return 0;
}

