#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll k; cin >> k;
    ll t; cin >> t;

    while(t--){
        ll n; cin >> n;

        ll sum = n*(n+1)/2;

        cout << sum % 2 << "\n";

        ll lBound = ceil((-1 + ceil(sqrt(1+4*sum)))/2);

        if((lBound-1)*(lBound)/2 == sum/2)
            lBound = lBound-1;

        for(ll i=1; i<=n; i++){
            if(i>lBound || i == lBound*(lBound+1)/2 - sum/2)
                cout << 0;
            else
                cout << 1;
        }
        cout << endl;

    }

    return 0;
}
