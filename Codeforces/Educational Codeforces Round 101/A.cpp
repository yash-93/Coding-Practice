#include <bits/stdc++.h>
using namespace std;

#define ll long long

void test(){
    string s;
    cin >> s;

    int n = s.size();

    if(s[0] == ')' || s[n-1] == '('){
        cout << "NO\n";
        return;
    }

    if((n-2)%2 == 0)
        cout << "YES\n";
    else
        cout << "NO\n";

}

int main(){
    int t; cin >> t;
    while(t--)
        test();
    return 0;
}
