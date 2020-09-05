#include <bits/stdc++.h>
using namespace std;

void test(){
    int a,b; cin >> a >> b;

    if(a==b){
        cout << 0 << endl;
        return;
    }

    int diff = abs(a-b);
    int res = 0;
    while(diff>=10){
        res += diff/10;
        diff = diff%10;
    }

    if(diff>0)
        cout << ++res << endl;
    else
        cout << res << endl;
}

int main(){
    int t; cin >> t;
    while(t--)
        test();
    return 0;
}
