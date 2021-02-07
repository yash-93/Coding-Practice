#include <bits/stdc++.h>
using namespace std;

#define ll long long

void test(){
    string s("");
    cin >> s;
    int n=s.size();
    for(int i=0; i<n; i += 2){
        if(s[i] == 'a')
            s[i] = 'b';
        else
            s[i] = 'a';
    }

    for(int i=1; i<n; i += 2){
        if(s[i] == 'z')
            s[i] = 'y';
        else
            s[i] = 'z';
    }

    cout << s << endl;
}

int main(){
    int t; cin >> t;
    while(t--)
        test();
    return 0;
}
