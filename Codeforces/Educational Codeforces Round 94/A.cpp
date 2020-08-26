#include <bits/stdc++.h>
using namespace std;

void test(){
    int n; cin >> n;
    string s;
    cin >> s;

    string res = "";

    for(int i=0; i<n; i++)
        res.push_back(s[n-1]);

    cout << res << endl;
}

int main(){
    int t; cin >> t;
    while(t--)
        test();
    return 0;
}
