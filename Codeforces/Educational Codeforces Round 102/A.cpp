#include <bits/stdc++.h>
using namespace std;

#define ll long long

void test(){
    int n, d;
    cin >> n >> d;
    vector<int> a(n);
    bool alreadyLess = true;
    for(int i=0; i<n; i++){
        cin >> a[i];
        if(a[i] > d)
            alreadyLess = false;
    }

    if(alreadyLess){
        cout << "YES\n";
        return;
    }

    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(a[i] + a[j] <= d){
                cout << "YES\n";
                return;
            }
        }
    }

    cout << "NO\n";
}

int main(){
    int t; cin >> t;
    while(t--)
        test();
    return 0;
}
