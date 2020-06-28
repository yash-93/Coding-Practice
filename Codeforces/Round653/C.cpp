#include <bits/stdc++.h>
using namespace std;

void test(){
    int n; cin >> n;
    string str; cin >> str;
    stack<char> s;
    int ans = 0;
    for(char const c:str){
        if(s.empty()){
            s.push(c);
        }else{
            if(c == '('){
                s.push(c);
            }else if(c == ')' && s.top() == '('){
                s.pop();
            }else{
                s.push(c);
            }
        }
    }
    cout << s.size()/2 << endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--)
        test();

    return 0;
}

