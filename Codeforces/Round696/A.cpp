#include <bits/stdc++.h>
using namespace std;

#define ll long long

void test(){
    int n; cin >> n;
    string b; cin >> b;
    string a("");
    int prevValue;
    if(b[0] == '1') prevValue = 2;
    else prevValue = 1;

    a.append("1");

    for(int i=1; i<n; i++){
        if(prevValue == 2){
            if(b[i] == '1') {
                a.append("0");
            }
            else {
                a.append("1");
            }
            prevValue = 1;
        } else if(prevValue == 1){
            if(b[i] == '0') {
                a.append("0");
                prevValue = 0;
            } else {
                a.append("1");
                prevValue = 2;
            }
        } else {
            if(b[i] == '1') {
                a.append("1");
                prevValue = 2;
            } else {
                a.append("1");
                prevValue = 1;
            }
        }
    }

    cout << a << endl;
}

int main(){
    int t; cin >> t;
    while(t--)
        test();
    return 0;
}
