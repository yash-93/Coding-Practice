#include <bits/stdc++.h>
using namespace std;

#define ll long long

void test(){
    int n; cin >> n;
    string num; cin >> num;

    if(n==1){
        char t = num[0];
        int ia = t - '0';
        if(ia&1)
            cout << 1 << endl;
        else
            cout << 2 << endl;

        return;
    }
    char last = num[n-1];
    int lastN = last - '0';

    if(n%2 == 1){
        for(int i=0; i<n; i += 2){
            if(num[i]%2==1){
                cout << 1 << endl;
                return;
            }
        }
        cout << 2 << endl;
    }else{
        for(int i=1; i<n; i += 2){
            if(num[i]%2==0){
                cout << 2 << endl;
                return;
            }
        }
        cout << 1 << endl;
    }

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--)
        test();
    return 0;
}
