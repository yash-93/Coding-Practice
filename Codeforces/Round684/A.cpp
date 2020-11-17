#include <bits/stdc++.h>
using namespace std;

#define ll long long

void test(){
    ll n, c0, c1, h;
    cin >> n >> c0 >> c1 >> h;
    string s("");
    cin >> s;

    ll _0 = 0;
    ll _1 = 0;

    for(auto c:s){
        if(c == '0')
            _0++;
        else
            _1++;
    }

    ll cost = _0 * c0 + _1 * c1;
    if(c0 == c1)
        cout << cost << endl;
    else if(c0 < c1){
        cost = min(cost,_0 * c0 + _1 * h + _1 * c0);
        cout << cost << endl;
    }
    else{
        cost = min(cost,_1 * c1 + _0 * h + _0 * c1);
        cout << cost << endl;
    }
}

int main(){
    int t; cin >> t;
    while(t--)
        test();
    return 0;
}
