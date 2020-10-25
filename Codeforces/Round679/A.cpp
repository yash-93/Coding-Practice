#include <bits/stdc++.h>
using namespace std;

#define ll long long

void test(){
    int n;
    cin >> n;

    vector<int> a(n);
    for(int i=0; i<n; i++)
        cin >> a[i];

    for(int i=n-1; i>=n/2; i--)
        cout << a[i] << " ";

    for(int i=n/2-1; i>=0; i--)
        cout << -(a[i]) << " ";

    cout << endl;
}

int main(){
    int t; cin >> t;
    while(t--)
        test();
    return 0;
}
