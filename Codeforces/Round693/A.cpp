#include <bits/stdc++.h>
using namespace std;

#define ll long long

void test(){
    ll w,h,n;
    cin >> w >> h >> n;

    ll init_a = 1;
    ll timescut_a = 1;
    while(w%2 == 0){
        init_a = 2 * timescut_a;
        timescut_a *= 2;
        w /= 2;
    }
    //cout << init_a << " ";
    ll init_b = 1;
    ll timescut_b = 1;
    while(h%2 == 0){
        init_b = 2 * timescut_b;
        timescut_b *= 2;
        h /= 2;
    }
    //cout << init_b << " ";

    ll prod = init_a * init_b;
    //cout << prod;
    if(prod >= n)
        cout << "YES\n";
    else
        cout << "NO\n";
}

int main(){
    int t; cin >> t;
    while(t--)
        test();
    return 0;
}
