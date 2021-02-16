#include <bits/stdc++.h>
using namespace std;

#define max_size 1000005
#define ll long long

void test(){
    ll n; cin >> n;
    vector<ll> a(n,0);
    for(int i=0; i<n; i++) cin >> a[i];

    sort(a.begin(), a.end());

    ll max = abs(a[n-1] - a[0]) + abs(a[0] - a[1]) + abs(a[1] - a[n-1]);

    cout << max << endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin >> t;
    while(t--)
        test();
    return 0;
}
