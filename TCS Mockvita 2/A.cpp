#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    string b_to_b; cin >> b_to_b;
    string g_to_b; cin >> g_to_b;

    unordered_map<char,int> m({ {'r',0},{'m',0} });
    for(auto c:g_to_b){
        m[c] += 1;
    }

    int i=0;
    for(auto c:b_to_b){
        if(m[c]>0){
            m[c] -= 1;
            i++;
        }else if(m[c]==0){
            break;
        }
    }

    cout << n-i;

    return 0;
}
