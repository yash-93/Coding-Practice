#include <bits/stdc++.h>
using namespace std;

#define ll long long

void test(){
    int n; cin >> n;
    vector<int> a(n);
    for(int i=0; i<n; i++) cin >> a[i];

    vector<int> b(n,0);
    int maxx = 0;

    for(int i=n-1; i>=0; i--){
        b[i] = a[i];
        if(i + a[i] < n)
            b[i] += b[i+a[i]];
        maxx = max(maxx,b[i]);
    }

    cout << maxx << endl;
}

int main(){
    int t; cin >> t;
    while(t--)
        test();
    return 0;
}
