#include <bits/stdc++.h>
using namespace std;

void test(){
    int n,k;
    cin >> n >> k;

    int rounds = 0;

    int sum = 0;

    vector<int> w(n);
    for(int i=0; i<n; i++){
        cin >> w[i];
    }

    for(int i=0; i<n; i++){
        if(w[i]>k){
            cout << -1 << endl;
            return;
        }
        if(sum+w[i] <= k){
            sum += w[i];
        }else{
            rounds += 1;
            sum = w[i];
        }
    }
    cout << rounds+1 << endl;
}

int main(){
    int t; cin >> t;
    while(t--)
        test();
    return  0;
}
