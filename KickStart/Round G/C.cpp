#include <bits/stdc++.h>
using namespace std;

#define ll long long

void test(int t){
    ll minx = INT_MAX;

    ll w, n; cin >> w >> n;
    vector<ll> x(w);
    for(ll i=0; i<w; i++){
        cin >> x[i];
    }

    for(ll i=1; i<=n; i++){
        ll tempSum = 0;
        for(ll j=0; j<w; j++){
            if(i<=x[j])
                tempSum += min(abs(x[j]-i), n-x[j]+i);
            else
                tempSum += min(abs(x[j]-i), n-i+x[j]);
        }
        minx = min(minx, tempSum);
    }

    cout << "Case #" << t << ": " << minx << "\n";
}

int main(){
    int t; cin >> t;

    for(int i=0; i<t; i++)
        test(i+1);

    return 0;
}
