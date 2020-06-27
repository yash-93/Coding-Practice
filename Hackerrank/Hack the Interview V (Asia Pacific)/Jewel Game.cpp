#include <bits/stdc++.h>
using namespace std;

int getMaxScore(string s) {
    int score = 0;
    size_t i = 0;
    while(i < s.size()-1){
        if(s[i] != s[i+1]){
            i++;
        }else{
            s.erase(i,2);
            ++score;
            //cout << s << s.size() << endl;
            bool temp = false;
            while(!temp){
                i--;
                if(s[i] == s[i+1]){
                    s.erase(i,2);
                    ++score;
                    //cout << s << s.size() << endl;
                }else{
                    i++;
                    temp = true;
                }
            }
        }
    }
    return score;
}

int main(){
    string s; cin >> s;
    cout << getMaxScore(s);
}
