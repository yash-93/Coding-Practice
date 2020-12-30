#include <bits/stdc++.h>
using namespace std;

#define ll long long

void test(){
    int n; cin >> n;
    vector<int> x(n);
    map<int,int> mapp;
    for(int i=0; i<n; i++){
        cin >> x[i];
        mapp[x[i]] += 1;
    }

    for(auto i:mapp){
        if(i.second > 1){
            if(!mapp[i.first + 1]){
                mapp[i.first] -= 1;
                mapp[i.first + 1] += 1;
            }else if(mapp[i.first+1] == 1){
                mapp[i.first+1] += 1;
                mapp[i.first] -= 1;
            }
        }
    }
    cout << mapp.size() << endl;
}

int main(){
    int t; cin >> t;
    while(t--)
        test();
    return 0;
}
