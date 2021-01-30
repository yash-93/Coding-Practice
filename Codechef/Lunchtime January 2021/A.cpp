#include <bits/stdc++.h>
using namespace std;

void test(){
    int n;
    cin >> n;
    vector<int> a(n,0);
    int even = 0, odd = 0;
    for(int i=0; i<n; i++){
        cin >> a[i];
        if(a[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    cout << min(even,odd) << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--)
        test();
}
