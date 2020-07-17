#include <bits/stdc++.h>
using namespace std;

void test(){
    int n; cin >> n;
    vector<int> a(n);
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    int res;
    int temp=n-1;

    if(n==1){
        res=0;
        goto jump;
    }

    while(a[temp-1]>=a[temp] && temp > 0){
        temp--;
    }

    while(a[temp-1]<=a[temp] && temp > 0){
        temp--;
    }

    res = temp;
    jump:
        cout << res << "\n";
}

int main(){
    int t; cin >> t;
    while(t--)
        test();
    return 0;
}
