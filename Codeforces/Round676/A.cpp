#include <bits/stdc++.h>
using namespace std;

#define ll long long

void test(){
    int a,b;
    cin >> a >> b;
    int x = a^b;
    cout << x << endl;
}

int main(){
    int t; cin >> t;
    while(t--)
        test();
    return 0;
}
