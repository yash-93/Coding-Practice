#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

void test(){
    int n, k, w;
    cin >> n >> k >> w;

    vector<ll> l;
    l.assign(n,0);
    for(int i=0; i<k; i++)
        cin >> l[i];

    ll al, bl, cl, dl;
    cin >> al >> bl >> cl >> dl;

    vector<ll> h;
    h.assign(n,0);
    for(int i=0; i<k; i++)
        cin >> h[i];

    ll ah, bh, ch, dh;
    cin >> ah >> bh >> ch >> dh;

    if(n>k){
        for(int i=k; i<n; i++){
            l[i] = ((al*l[i-2] + bl*l[i-1] + cl) % dl) + 1;
            h[i] = ((ah*h[i-2] + bh*h[i-1] + ch) % dh) + 1;
        }
    }

    vector<ll> p;
    p.assign(n,0);

    p[0] = 2*((h[0]+w))%mod;

    ll max_h = h[0];

    for(int i=1; i<n; i++){
        max_h = h[i]>max_h ? h[i] : max_h;
        if(l[i-1]+w > l[i]){
            p[i] = p[i-1] + 2*(((l[i]+w)-(l[i-1]+w))+h[i]) - 2*min(h[i],h[i-1]);
        }
    }

    cout << p[2];

}

int main(){
    int t; cin >> t;
    while(t--)
        test();
    return 0;
}
