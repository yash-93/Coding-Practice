#include <bits/stdc++.h>
using namespace std;

#define ll long long

void test(){
    int n;
    cin >> n;
    int mid;
    string str = "0123456789";
    if(n == 1)
        cout << 9;
    else if(n == 2)
        cout << 98;
    else if(n == 3)
        cout << 989;
    else {
        cout << 989;
        for(int i=0; i<n-3; i++){
            cout << str[i%10];
        }
    }

    cout << endl;
}

int main(){
    int t; cin >> t;
    while(t--)
        test();
    return 0;
}
