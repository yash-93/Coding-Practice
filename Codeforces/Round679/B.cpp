#include <bits/stdc++.h>
using namespace std;

#define ll long long

void test(){
    int n,m;
    cin >> n >> m;
    vector<vector<int>> a(n,vector<int> (m));
    vector<vector<int>> b(m,vector<int> (n));

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> a[i][j];
        }
    }
    int topleft = a[0][0];

    int searchIndex;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin >> b[i][j];
            if(b[i][j] == topleft)
                searchIndex = i;
        }
    }

    map<int,int> indeces;
    for(int i=0; i<n; i++){
        indeces[b[searchIndex][i]] = i;
    }

    vector<vector<int>> res(n, vector<int> (m));

    for(int i=0; i<n; i++){
        int ele = a[i][0];
        int loc = indeces[ele];
        res[loc] = a[i];
    }

    for(auto i:res){
        for(auto j:i){
            cout << j << " ";
        }
        cout << endl;
    }

}

int main(){
    int t; cin >> t;
    while(t--)
        test();
    return 0;
}
