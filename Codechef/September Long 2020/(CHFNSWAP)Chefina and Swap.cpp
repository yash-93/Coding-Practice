#include <bits/stdc++.h>
using namespace std;

#define ll long long

void test(){
    ll n;
    cin >> n;
    ll sum = n*(n+1)/2;
    if(sum % 2 == 1){
        cout << 0 << "\n";
        return;
    }

    /*vector<ll> a(n+1);
    a[0] = 0;
    for(ll i=1; i<=n; i++)
        a[i] = a[i-1] + i;
    ll half_sum = a[n]/2;
    ll lBound = lower_bound (a.begin(), a.end(), half_sum) - a.begin();*/
    //cout << lBound << endl;

    ll nCopy = n;
    ll halfSum = sum/2;
    ll tempSum = 0;
    ll y;
    while(halfSum >= nCopy){
        y = halfSum/nCopy;
        tempSum +=  y;
        halfSum = halfSum % nCopy + ((y*(y-1))/2);
        nCopy-=y;
    }

    ll lBound = nCopy;

    ll half_sum = sum/2;
    if((lBound)*(lBound+1)/2 == half_sum){
        ll res = (lBound-1)*(lBound)/2 + (n-lBound-1)*(n-lBound)/2 + n-lBound;
        cout << res << "\n";
        return;
    }

    cout << n-lBound+1 << "\n";
}

int main(){
    int t;
    cin >> t;
    while(t--)
        test();
    return 0;
}
