#include <bits/stdc++.h>
using namespace std;

void test(){
    int n, k, x, y;
    cin >> n >> k >> x >> y;

    k = k % n;

    if(x == y){
        cout << "YES\n";
        return;
    }

    if(k == 0){
        cout << "NO\n";
        return;
    }

    for(int i=1; i<=n; i++){
        if((x+k*i)%n == y){
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";
}

int main(){
    int t;
    cin >> t;

    while(t--){
        test();
        /*int n, k, x, y;
        cin >> n >> k >> x >> y;

        k = k % n;

        if(x==y){
            cout << "YES\n";
        }else if(k==0 && x!=y){
            cout << "NO\n";
        }else if(k!=0){
            int temp = abs(x-y);
            if(temp % k == 0){
                cout << "YES\n";}
            else{
                cout << "NO\n";}
        }
        */
    }

    return 0;
}
