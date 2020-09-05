#include <bits/stdc++.h>
using namespace std;

#define ll long long

void test(){
    ll a,b,x,y,n; cin >> a >> b >> x >> y >> n;
    ll temp_a,temp_b,temp_x,temp_y,temp_n;
    ll prod1 = 0;
    ll prod2 = 0;

    temp_a = a - x >= n ? a-n : x;
    temp_n = n - (a-temp_a);
    temp_b = b - y >= temp_n ? b-temp_n : y;

    prod1 = temp_a*temp_b;

    temp_b = b - y >= n ? b-n : y;
    temp_n = n - (b-temp_b);
    temp_a = a - x >= temp_n ? a-temp_n : x;

    prod2 = temp_a*temp_b;
    //cout << prod1 << prod2 << endl;
    cout << min(prod1,prod2) << endl;
}

int main(){
    int t; cin >> t;
    while(t--)
        test();
    return 0;
}

