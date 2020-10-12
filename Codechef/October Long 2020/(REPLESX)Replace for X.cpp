#include <bits/stdc++.h>
using namespace std;

#define ll long long

void test(){
    ll n, x, p, k;
    cin >> n >> x >> p >> k;

    vector<ll> a(n+1);
    vector<ll> maxx(n+1);
    vector<ll> minn(n+1);
    a[0] = 0;
    for(ll i=1; i<=n; i++)
        cin >> a[i];

    sort(a.begin(), a.end());

    if(a[p] == x){
        cout << 0 << endl;
        return;
    }

    maxx[0] = 0;
    minn[0] = 0;

    for(ll i=1; i<=n; i++){
        if(a[i] > x){
            maxx[i] = maxx[i-1] + 1;
        }else{
            maxx[i] = 0;
        }

        if(a[i]<x){
            minn[i] = minn[i-1] + 1;
        }else{
            minn[i] = minn[i-1];
        }
    }

    if(p == k){
        if(a[p] < x)
            cout << minn[n] - minn[p] + 1 << endl; // fine
        else
            cout << maxx[p] << endl; // fine
    }else if(p < k){
        if(a[p] < x)
            cout << -1 << endl; // fine
        else if(a[p] > x)
            cout << maxx[p] << endl; // fine
    }else if(p > k){
        if(a[p] > x){
            cout << -1 << endl; // fine
        }
        else
            cout << minn[n] - minn[p] + 1 << endl; // fine
    }
}

int main(){
    ll t;
    cin >> t;

    while(t--)
        test();

    return 0;
}
