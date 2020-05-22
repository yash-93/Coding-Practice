#include <bits/stdc++.h>
using namespace std;

vector<bool> visited;
vector<int> component_len;
int routes = 0, len = 0;

void add_edge(vector<pair<int,int> > adj_list[], int u, int v, int weight)
{
    adj_list[u].push_back(make_pair(v, weight));
    adj_list[v].push_back(make_pair(u, weight));
}

void printGraph(vector<pair<int,int> > adj_list[], int V){
    int v, w;
    for (int u = 0; u < V; u++)
    {
        cout << "Node " << u << ": ";
        for (auto it = adj_list[u].begin(); it!=adj_list[u].end(); it++)
        {
            v = it->first;
            w = it->second;
            cout << "(" << v << ", " << w << ")" << "->";
        }
        cout << "\n";
    }
}

void DFS(vector<pair<int,int> > adj_list[], int u){
    len++;
    visited[u] = true;
    cout << u << " ";

    for (auto it = adj_list[u].begin(); it!=adj_list[u].end(); it++)
    {
        if(!visited[it->first])
            DFS(adj_list, it->first);
    }
}

int main(){
    int V;
    cout << "Enter number of vertices: ";
    cin >> V;
    visited.assign(V, false);
    vector<pair<int,int> > adj_list[V];
    int edges;
    cout << "Enter no of edges you want to have: ";
    cin >> edges;
    int max_edges = (V*(V-1))/2;
    if( edges > max_edges ){
        cout << "Max edge limit exceeded. Exiting...";
        exit(0);
    }
    else{
        int u, v, weight;
        for(int i=0; i<edges; i++){
            cout << "Enter vertex endpoints and weight(u v weight): ";
            cin >> u >> v >> weight;
            add_edge(adj_list, u, v, weight);
        }
        cout << "\n";
        //printGraph(adj_list, V);
        //cout << "\n";

        cout << "All Connected Components are as follows : \n";
        for (int i=0; i<V; i++){
            if (visited[i] == false){
                ++routes;
                DFS(adj_list, i);
                cout << "\n";
                component_len.push_back(len);
                len = 0;
            }
        }

        cout << "\n";
        cout << routes << " ";
        long route_cap_ways = 1;
        for(auto it=component_len.begin(); it!=component_len.end(); it++){
            route_cap_ways *= *it;
        }
        cout << route_cap_ways;
    }
    return 0;
}

