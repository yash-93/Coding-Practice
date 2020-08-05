// Time Complexity => O(n)
// Space Complexiy => O(n)

#include <bits/stdc++.h>
using namespace std;

bool isBalanced(string s){
    if(s[0] == ')' || s[0] == '}' || s[0] == ']')
        return false;

    stack<char> brk;
    for(auto c:s){
        if(c == '(' || c == '[' || c == '{')
            {brk.push(c);}
        else{
            if(c == ']' && brk.top() == '[')
                brk.pop();
            else if(c == '}' && brk.top() ==  '{')
                brk.pop();
            else if(c == ')' && brk.top() == '(')
                brk.pop();
            else
                return false;
        }
    }
    return brk.empty();
}

int main(){
    string s("(([]()()){})");
    cout << isBalanced(s);

    return 0;
}
