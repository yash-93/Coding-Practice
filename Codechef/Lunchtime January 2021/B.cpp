#include <bits/stdc++.h>
using namespace std;

void test(){
    int n;
    cin >> n;
    vector<int> a(n,0);
    int odd = 0;
    for(int i=0; i<n; i++){
        cin >> a[i];
        if(a[i] % 2 == 1) odd++;
    }

    if(odd % 2 == 1)
        cout << "2\n";
    else
        cout << "1\n";
}

int main(){
    int t;
    cin >> t;
    while(t--)
        test();
}
