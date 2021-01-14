#include <bits/stdc++.h>
using namespace std;

#define ll long long

void test(){
    string s("");
    cin >> s;
    string t("");
    cin >> t;


    if(s.size() > t.size()){
        swap(s,t);
    }

    string shortStr = s, longStr = t;

    while(s.size() != t.size()){
        if(s.size()<t.size())
            s += shortStr;
        else
            t += longStr;
    }

    if(s == t)
        cout << s << endl;
    else
        cout << -1 << endl;
}

int main(){
    int t; cin >> t;
    while(t--)
        test();
    return 0;
}
