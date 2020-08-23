#include <bits/stdc++.h>
using namespace std;

void test(){
    int n; cin >> n;
    vector<pair<int,int>> edges;
    int u,v;
    for(int i=0; i<n; i++){
        cin >> u >> v;
        edges.push_back(make_pair(u,v));
    }

    int res = 0;

    while(n>5){
        res += n;
        n /= 2;
    }

    res += n;

    cout << res << endl;
}

int main(){
    int t; cin >> t;
    while(t--)
        test();
    return  0;
}

