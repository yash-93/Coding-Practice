#include <bits/stdc++.h>
using namespace std;

void test(){
    int x, y, z;
    cin >> x >> y >> z;
    int a = x <= y ? x : y;
    int b = x <= z ? x : z;
    int c = y <= z ? y : z;

    if(max({a,b,c}) == max({x,y,z})){
        cout << "YES\n";
        cout << a << " " << b << " " << c << "\n";
    }else{
        cout << "NO\n";
    }
}

int main(){
    int t; cin >> t;
    while(t--)
        test();
    return 0;
}
