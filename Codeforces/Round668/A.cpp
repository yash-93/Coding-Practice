#include <bits/stdc++.h>
using namespace std;

void test(){
    int n,k; cin >> n >> k;
    string s;
    cin >> s;
    bool res = true;
    for(int i=0; i<=n-k; i++){
        string temp = s.substr(i,k);
        cout << temp << " ";
        map<char,int> m;
        for(auto c:temp)
            m[c] += 1;
        if(m['1']>k/2 || m['0']>k/2){
            //cout << "IN1" << " ";
            res = false;
            break;
        }
        if( (m['0']+m['1']%2==0 && m['?']%2==1) || (m['0']+m['1']%2==1 && m['?']%2==0) )
        {
            //cout << "IN2" << " ";
            res = false;
            break;
        }
    }
    if(res)
        cout << "YES\n";
    else
        cout << "NO\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--)
        test();
    return 0;
}
