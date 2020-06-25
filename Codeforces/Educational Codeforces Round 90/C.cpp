#include <bits/stdc++.h>
using namespace std;

void test(){
    string s; cin >> s;
    int res = 0;
    int cur;
    bool ok;
    for(int init=0; ;init++){
        cur = init;
        ok = true;
        for(int i=0; i<s.size(); i++){
            res += 1;
            if (s[i] == '+')
                cur += 1;
            else
                cur -= 1;

            if(cur<0){
                ok = false;
                break;
            }
        }
        if(ok) break;
    }
    cout << res << endl;
}

int main(){
    int T; cin >> T;
    while(T--) test();
}
