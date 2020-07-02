#include <bits/stdc++.h>
using namespace std;

void test(){
    int n;
    cin >> n;
    if(n %2 == 1){
        cout << (n/2)+1 << endl;
    }else {
        cout << n/2 << endl;
    }
}

int main(){
    int t; cin >> t;
    while(t--)
        test();

    return 0;
}
