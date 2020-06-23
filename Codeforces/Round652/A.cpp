#include <bits/stdc++.h>
using namespace std;

void test(){
    int n; cin >> n;
    int a,b;
    a = n%10;
    if(n>9){
        n = n/10;
        b = n%10;
    }
    int num = (b*10) + a;
    if(num%4==0){
        cout << "YES\n";
    }
    else{
        cout << "NO\n";
    }
}

int main(){
    int T; cin >> T;
    while(T--) test();
}
