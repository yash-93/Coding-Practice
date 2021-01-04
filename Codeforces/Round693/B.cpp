#include <bits/stdc++.h>
using namespace std;

#define ll long long

void test(){
    int n; cin >> n;
    vector<int> a(n);
    int count_1 = 0;
    int count_2 = 0;
    for(int i=0; i<n; i++){
        cin >> a[i];
        if(a[i] == 1){
            count_1++;
        }else{
            count_2++;
        }
    }

    if(count_1%2 == 0 && count_2%2 == 0){
        cout << "YES\n";
        return;
    }

    if(count_1 % 2 == 0 && count_1 > 0){
        cout << "YES\n";
        return;
    }

    cout << "NO\n";
}

int main(){
    int t; cin >> t;
    while(t--)
        test();
    return 0;
}
