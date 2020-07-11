#include <bits/stdc++.h>
using namespace std;

void test(){
    int n; cin >> n;
    for(int i=0; i<n; i++){
        if(i==n-1){
            cout << 1 << "\n";
        }else{
            cout << 1 << " ";
        }
    }
}

int main(){
    int t; cin >> t;
    while(t--){
        test();
    }
    return 0;
}
