#include <bits/stdc++.h>
using namespace std;

#define ll long long

void test(){
    ll n,k;
    cin >> n >> k;

    vector<ll> a(n*k + 1, 0);
    for(int i=1; i<=n*k; i++)
        cin >> a[i];

    ll sum = 0;
    ll median = ceil((float)n/2);

    if(n==1){
        for(int i=1; i<=n*k; i++)
            sum += a[i];
    }else if(n == 2){
        for(int i=1; i<=n*k; i += 2)
            sum += a[i];
    }else{
        for(int i=(median-1)*k+1; i<=n*k; i += (n-median+1))
            sum += a[i];
    }

    cout << sum << endl;
}

int main(){
    int t; cin >> t;
    while(t--)
        test();
    return 0;
}
