#include <bits/stdc++.h>
using namespace std;

#define ll long long

void test(){
    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    for(int i=0; i<n; i++)
        cin >> a[i];

    vector<int> b(n);
    for(int i=0; i<n; i++)
        cin >> b[i];

    sort(b.begin(), b.end(), greater<int>());

    for(int i=0; i<n; i++){
        if(a[i] + b[i] > x){
            cout << "NO\n";
            return;
        }
    }

    cout << "YES\n";

}

int main(){
    int t; cin >> t;
    while(t--)
        test();
    return 0;
}
