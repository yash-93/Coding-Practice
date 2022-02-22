#include <bits/stdc++.h>
using namespace std;

#define ll long long

void test(){
    unordered_map<int,int> freq;
    string s;
    cin >> s;
    for(auto c : s) {
        if(c == 'r' || c == 'g' || c == 'b') {
            freq[int(c)]++;
        } else if(c == 'R' || c == 'G' || c == 'B') {
            if(!freq[int(c) + 32]) {
                cout << "NO\n";
                return;
            }
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
