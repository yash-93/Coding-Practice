#include <bits/stdc++.h>
using namespace std;

void test(){
    string s; cin >> s;
    if(s.size()<=0){
        cout << "NET\n";
        return;
    }
    int count0 = 0, count1 = 0;
    int i = 0;

    while(i<s.size()){
        if(s[i]=='0')
            count0++;
        else
            count1++;

        i++;
    }

    int count = min(count0, count1);

    if(count%2!=0){
        cout << "DA\n";
    }else{
        cout << "NET\n";
    }
}

int main(){
    int T; cin >> T;
    while(T--) test();
}
