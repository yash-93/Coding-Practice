#include <bits/stdc++.h>
using namespace std;

#define ll long long

void test(){
    int n, m;
    cin >> n >> m;

    vector<vector<int>> tiles(n);

    int a,b,c,d;

    bool poss = false;

    for(int i=0; i<n; i++)
    {
        cin >> a >> b >> c >> d;
        tiles[i].push_back(a);
        tiles[i].push_back(b);
        tiles[i].push_back(c);
        tiles[i].push_back(d);
        if( b == c)
            poss = true;
    }

    if(m%2 != 0){
        cout << "NO\n";
        return;
    }

    if(poss)
        cout << "YES\n";
    else
        cout << "NO\n";
}

int main(){
    int t; cin >> t;
    while(t--)
        test();
    return 0;
}
