#include <bits/stdc++.h>
using namespace std;

#define ll long long

void test(){
    int n, m ,r, c;
    cin >> n >> m >> r >> c;

    int x1 = 1, y1 = 1;
    int x2 = 1, y2 = m;
    int x3 = n, y3 = 1;
    int x4 = n, y4 = m;

    int res = 0;

    res = abs(r-x1) + abs(c-y1);

    res = max(res,abs(r-x2) + abs(c-y2));
    res = max(res,abs(r-x3) + abs(c-y3));
    res = max(res,abs(r-x4) + abs(c-y4));

    cout << res << endl;
}

int main(){
    int t; cin >> t;
    while(t--)
        test();
    return 0;
}
