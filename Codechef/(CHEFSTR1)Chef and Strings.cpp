#include <bits/stdc++.h>
using namespace std;

void test(){
    long long n; cin >> n;
    vector<long long> s;
    long long val;
    for(long long i=0; i<n; i++){
        cin >> val;
        s.push_back(val);
    }
    long long res = 0;
    for(long long i=0; i<n-1; i++){
        res += (abs(s[i] - s[i+1]) - 1);
    }
    cout << res << endl;
}

int main(){
    long long t;cin >> t;
    while(t--)
        test();

    return 0;
}
