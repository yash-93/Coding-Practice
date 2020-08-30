#include <bits/stdc++.h>
using namespace std;

void test(){
    int n; cin >> n;
    vector<string> strs(n);
    for(int i=0; i<n; i++)
        cin >> strs[i];

    map<char,int> m;
    int count = 0;
    for(auto str:strs){
        for(auto it=str.begin(); it!=str.end(); it++){
            m[*it] += 1;
            count++;
        }
    }

    for(auto it=m.begin(); it!=m.end(); it++){
        if(it->second % n != 0){
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
}

int main(){
    int t; cin >> t;

    while(t--)
        test();

    return 0;
}
