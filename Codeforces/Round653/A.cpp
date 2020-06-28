#include <bits/stdc++.h>
using namespace std;

void test(){
    int res = 0;
    int x,y,n;
    cin >> x >> y >> n;

    int mod = n%x;

    if(y==mod){
        res = n;
    }else if(y>mod){
        n -= (mod+x);
        n += y;
        res = n;
    }else{
        n -= mod;
        n += y;
        res = n;
    }

    cout << res << endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--)
        test();
    return 0;
}
