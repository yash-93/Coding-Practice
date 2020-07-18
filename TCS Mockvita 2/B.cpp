#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int val;
    vector<int> a(n);
    vector<int> b(n);
    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    for(int i=0; i<n; i++){
        int l = INT_MIN, s = INT_MAX;
        while(true){
            if(a[i]%10 > l)
                l = a[i] % 10;
            if(a[i] % 10 < s){
                s = a[i] % 10;
            }
            if(a[i]/10 == 0){
                break;
            }
            else{
                a[i] = a[i]/10;
            }
        }
        val = l*11 + s*7;
        int lsb = val % 10;
        val = val/10;
        int msb = val % 10;
        val = msb*10 + lsb;

        b.push_back(val);
        cout << val << " ";
    }


    return 0;
}
