#include <bits/stdc++.h>
using namespace std;

#define ll long long

void test(){
    int n, k; cin >> n >> k;
    vector<int> c(n,0);
    for(int i=0; i<n; i++)
        cin >> c[i];

    int maxx = 0;
    int maxxele = c[0];

    map<int,int> freq;
    for(auto i:c){
        freq[i] += 1;
        int prev_max = maxx;
        maxx = max(maxx, freq[i]);
        if(maxx != prev_max)
            maxxele = i;
    }

    int res = INT_MAX;
    for(auto color:freq){
        int temp_res = 0;
        for(int i=0; i<n; i++){
            if(c[i] != color.first){
                temp_res++;
                i = i + k - 1;
            }
        }
        res = min(res,temp_res);
    }

    cout << res << endl;
}

int main(){
    int t; cin >> t;
    while(t--)
        test();
    return 0;
}
