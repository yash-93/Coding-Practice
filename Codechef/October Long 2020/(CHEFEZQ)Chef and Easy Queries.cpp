#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    ll t;
    cin >> t;

    while(t--){
        ll n, k;
        cin >> n >> k;

        vector<ll> q(n);

        for(ll i=0; i<n; i++)
            cin >> q[i];

        for(ll i=0; i<n; i++){
            if(i==n-1){
                if(q[i] < k){
                    cout << i+1 << endl;
                    break;
                }else{
                    cout << i+1+((q[i]-k)/k)+1 << endl;
                    break;
                }
            }
            if(q[i] < k){
                cout << i+1 << endl;
                break;
            }else{
                q[i+1] += q[i] - k;
            }
        }

    }

    return 0;
}
