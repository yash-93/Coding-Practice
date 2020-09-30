#include <bits/stdc++.h>
using namespace std;

#define ll long long

void test(){
    int n; cin >> n;
    vector<int> a(n), b(n), c(n), p(n);

    for(int i=0; i<n; i++)
        cin >> a[i];

    for(int i=0; i<n; i++)
        cin >> b[i];

    for(int i=0; i<n; i++)
        cin >> c[i];

    p[0] = a[0];

    if(n == 1){
        cout << p[0] << endl;
        return;
    }

    for(int i=1; i<n-1; i++){
        if(a[i] != p[i-1])
            p[i] = a[i];
        else if(b[i] != p[i-1])
            p[i] = b[i];
        else if(b[i] != p[i-1])
            p[i] = c[i];
    }

    if(p[0] != a[n-1] && p[n-2] != a[n-1])
        p[n-1] = a[n-1];
    else if(p[0] != b[n-1] && p[n-2] != b[n-1])
        p[n-1] = b[n-1];
    else if(p[0] != c[n-1] && p[n-2] != c[n-1])
        p[n-1] = c[n-1];
    for(auto i:p)
        cout << i << " ";
    cout << endl;
}

int main(){
    int t; cin >> t;
    while(t--)
        test();
    return 0;
}
