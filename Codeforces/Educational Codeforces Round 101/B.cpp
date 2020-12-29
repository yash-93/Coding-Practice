#include <bits/stdc++.h>
using namespace std;

#define ll long long

void test(){
    int n; cin >> n;
    int max_r = 0;
    vector<int> r(n);
    int temp = 0;
    for(int i=0; i<n; i++){
        cin >> r[i];
        temp += r[i];
        max_r = max(temp,max_r);
    }

    int m; cin >> m;
    int max_b = 0;
    vector<int> b(m);
    temp = 0;
    for(int i=0; i<m; i++){
        cin >> b[i];
        temp += b[i];
        max_b = max(temp,max_b);
    }
     cout << max_r + max_b << endl;
}

int main(){
    int t; cin >> t;
    while(t--)
        test();
    return 0;
}
