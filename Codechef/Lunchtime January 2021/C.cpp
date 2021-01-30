#include <bits/stdc++.h>
using namespace std;

void test(){
    int n; cin >> n;
    string s(""); cin >> s;
    vector<int> l2r(n,0);
    l2r[0] = (s[0] == '0') ? 0 : 1;
    for(int i=1; i<n; i++)
        l2r[i] = s[i] == '1' ? l2r[i-1] + 1 : l2r[i-1];

    vector<int> r2l(n,0);
    r2l[n-1] = (s[n-1] == '0') ? 1 : 0;
    for(int i=n-2; i>=0; i--)
        r2l[i] = s[i]=='0' ? r2l[i+1] + 1 : r2l[i+1];

    int minn = INT_MAX;
    for(int i=0; i<n-1; i++)
    {
        minn = min(minn, l2r[i]+r2l[i+1]);
    }

    minn = min(minn,r2l[0]);
    minn = min(minn,l2r[n-1]);
    cout << minn << endl;
}

int main() {
    int t;
    cin >> t;
    while(t--)
        test();
  return 0;
}
