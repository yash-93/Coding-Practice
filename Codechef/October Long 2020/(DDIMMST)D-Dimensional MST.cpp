#include <bits/stdc++.h>
using namespace std;

#define ll long long

struct node {
    int parent;
    int rank;
};

vector<node> dsuf;

//int *parent;

vector<pair<int,int>> MST;
ll sum = 0;

// Path Compression
int find(int a){
    if(dsuf[a].parent == -1)
        return a;
    return dsuf[a].parent=find(dsuf[a].parent);
}

/*
// Brute force
int find(int a) {
  if(parent[a] == a) return a;

  return parent[a] = find(parent[a]);
}*/

void union_op(int a, int b){
    if(dsuf[a].rank > dsuf[b].rank)
        dsuf[b].parent = a;
    else if(dsuf[a].rank < dsuf[b].rank)
        dsuf[a].parent = b;
    else{
        dsuf[a].parent = b;
        dsuf[b].rank += 1;
    }
}

/*
void merge(int a, int b) {
  parent[a] = parent[b];
}*/

bool comp(pair<int,pair<int,int>> a, pair<int,pair<int,int>> b){
    if(a.first > b.first)
        return true;
    return false;
}

void kruskal(vector<pair<int,pair<int,int>>> edges2D, ll n){
    sort(edges2D.begin(), edges2D.end(), comp);
    int a,b;
    for(auto it=edges2D.begin(); it!= edges2D.end(); it++){
        a = find(it->second.first);
        b = find(it->second.second);

        if(a != b){
            sum += it->first;
            MST.push_back({a,b});
            union_op(a,b);
            //merge(a,b);
        }
    }
}

void test(){
    ll n,d; cin >> n >> d;

    dsuf.resize(n);
    for(int i=0; i<n; i++){
        dsuf[i].parent = -1;
        dsuf[i].rank = 0;
    }

    /*parent = new int[n];
    for (int i = 0; i < n; i++)
        parent[i] = i;
    */

    vector<vector<ll>> edges(n);

    for(ll i=0; i<n; i++){
        vector<ll> vertex(d);
        for(ll j=0; j<d; j++){
            cin >> vertex[j];
        }
        edges[i] = vertex;
    }

    vector<pair<int,pair<int,int>>> edges2D;

    for(ll i=0; i<n; i++){
        for(ll j=i+1; j<n; j++){
            ll sum = 0;
            for(ll k=0; k<d; k++){
                sum += abs(edges[i][k] - edges[j][k]);
            }
            edges2D.push_back({sum,{i,j}});
        }
    }

    kruskal(edges2D, n);

    cout << sum << "\n";

}

int main(){

    test();

    return 0;
}
