#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll getSquares(bitset<100001> a, bitset<100001> b){
    bitset<100001> temp = a & b;
    return temp.count();
}

int main(){
    ll w, h, n, m;
    cin >> w >> h >> n >> m;

    vector<ll> a(n);
    for(ll i=0; i<n; i++){
        cin >> a[i];
    }

    bitset<100001> bVal;
    vector<ll> b(m);
    for(ll i=0; i<m; i++){
        cin >> b[i];
        bVal.set(b[i],1);
    }

    sort(a.begin(),a.end());
    sort(b.begin(),b.end());

    bitset<100001> aDiffBase;
    bitset<100001> bDiffBase;
    bitset<100001> common;

    common.set(0,1);
    for(ll i=1; i<n; i++){
        common <<= (abs(a[i] - a[i-1]));
        common.set(0,1);
        aDiffBase = aDiffBase | common;
    }

    common.reset();
    common.set(0,1);
    for(ll i=1; i<m; i++){
        common <<= (abs(b[i] - b[i-1]));
        common.set(0,1);
        bDiffBase = bDiffBase | common;
    }

    /*for(int i=0; i<bDiffBase.size(); i++)
        cout << bDiffBase.test(i) << " ";*/

    ll maxSquares = 0;
    bitset<100001> addSmallSquares;
    for(ll i=0; i<=h; i++){
        bitset<100001> temp;
        temp = bDiffBase | (bVal>>i);
        addSmallSquares = addSmallSquares << 1;
        addSmallSquares.set(0,bVal[i]);
        temp = temp | addSmallSquares;
        /*if(mp[i] == 0){
            bitset<100005> bDiffBaseCopy = bDiffBase;
            for(ll j=0; j<m; j++){
                bDiffBaseCopy.set(abs(i-b[j]),1);
            }
            ll tempSquares = getSquares(bDiffBaseCopy, aDiffBase);
            maxSquares = max(tempSquares,maxSquares);
        }*/
        maxSquares = max(maxSquares, getSquares(temp, aDiffBase));
    }

    cout << maxSquares-1 << endl;

    return 0;
}
