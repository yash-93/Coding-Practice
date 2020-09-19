#include <bits/stdc++.h>
using namespace std;

#define ll long long

void test(){
    ll n; cin >> n;
    vector<ll> a(n);

    for(ll i=0; i<n; i++)
        cin >> a[i];

    sort(a.begin(), a.end(), greater<ll>());

    ll first = 0;
    ll second;

    if(n%2==1){
        cout << n/2 << endl;
        second = n/2 + 1;
    }
    else{
        cout << n/2 - 1 << endl;
        second = n/2;
    }

    for(ll i=0; i<n; i++){
        if(i%2==0){
            cout << a[first] << " ";
            ++first;
        }else{
            cout << a[second] << " ";
            ++second;
        }
    }
    cout << endl;
}

int main(){
    test();
    return 0;
}
