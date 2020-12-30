#include <bits/stdc++.h>
using namespace std;

#define ll long long

void test(){
    int n; cin >> n;
    vector<int> x(n);
    for(int i=0; i<n; i++) cin >> x[i];
    int res = 0;
    unordered_map<int,int> mapp;
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            int diff = x[j] - x[i];
            if(!mapp[diff]){
                mapp[diff] += 1;
                res++;
            }
        }
    }
    cout << res << endl;
}

int main(){
    int t; cin >> t;
    while(t--)
        test();
    return 0;
}
