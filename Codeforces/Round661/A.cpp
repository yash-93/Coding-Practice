#include <bits/stdc++.h>
using namespace std;

void test(){
    int n; cin >> n;
    vector<int> a(n);
    for(int i=0;i<n;i++)
        cin >> a[i];

    sort(a.begin(), a.end());

    for(int i=0;i<n-1;i++){
        if(a[i+1]-a[i]>1){
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
