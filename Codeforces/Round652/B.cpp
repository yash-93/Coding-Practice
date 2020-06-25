#include <bits/stdc++.h>
using namespace std;

string getShrinkedString(int i, string s){
    auto it1 = s.begin();
    auto it0 = s.begin();
    string s1 = s;
    string s0 = s;
    s1.erase(s1.begin()+i);
    s0.erase(s0.begin()+(i+1));
    string res;
    if(s1.compare(s0) < 0){
        res = s1;
    }else if(s1.compare(s0)==0){
        res = s1;
    }else{
    res = s0;
    }
    return res;
}

void test(){
    int n; cin >> n;
    string s; cin >> s;
    string temp = "";
    int i = 0;
    while(i<s.size()-1){
        if(s[i]=='1' && s[i+1]=='0'){
            temp = getShrinkedString(i,s);
        }
        if(temp.size() == s.size()-1){
            i = 0;
            s = temp;
        }else{
            i++;
        }
    }
    cout << s << endl;
}

int main(){
    int T; cin >> T;
    while(T--) test();
}

