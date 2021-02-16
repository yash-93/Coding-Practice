#include <bits/stdc++.h>
using namespace std;

#define max_size 1000005
#define ll long long

vector<bool> ar(max_size,false);
vector<ll> primeCount(max_size,0);

void sieve(){
    for(ll i=2; i<=sqrt(max_size); i++){
        if(!ar[i]){
            for(ll j=i*i; j<=max_size; j+=i){
                if(!ar[j])
                    ar[j] = true;
            }
        }
    }
}

void computePrimeCount(){
    int count = 0;
    for(ll i=2; i<=max_size; i++){
        if(!ar[i])
            count++;
        primeCount[i] = count;
    }
}

void test(){
    ll x, y;
    cin >> x >> y;
    if(primeCount[x] > y) cout << "Divyam\n";
    else cout << "Chef\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin >> t;
    sieve();
    computePrimeCount();
    while(t--)
        test();
    return 0;
}
