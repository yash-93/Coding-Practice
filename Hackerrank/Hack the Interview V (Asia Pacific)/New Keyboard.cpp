#include <bits/stdc++.h>
using namespace std;

string receivedText(string s) {
    string res="";
    int res_ptr = 0;
    bool num = true;
    size_t i = 0;
    for(int i=0; i<s.size(); i++){
        if(s[i] == '<'){
            res_ptr = 0;
        }
        else if(s[i] == '>'){
            res_ptr = res.size();
        }
        else if(s[i] == '*'){
            if(i>0){
                res.erase(res.begin()+(res_ptr-1));
                res_ptr--;
            }
        }
        else if(s[i] == '#'){
            if(num) num=false;
            else num = true;
        }
        else {
            if(isdigit(s[i])){
                if(num){
                res.insert(res.begin()+res_ptr, s[i]);
                res_ptr++;
                }
            }else{
                res.insert(res.begin()+res_ptr, s[i]);
                res_ptr++;
            }
        }
    }
    return res;

    /*int res_ptr = 0;
    bool num = true;
    size_t i = 0;
    while(s[0]=='*'){
        s.erase(s.begin());
    }
    while(i<s.size()){
        if(!isalpha(s[i])){
            break;
        }
        i++;
        res_ptr++;
    }
    while(i<s.size()){
        if(s[i] == '<'){
            s.erase(s.begin()+i);
            res_ptr = 0;
        }
        else if(s[i] == '>'){
            s.erase(s.begin()+i);
            res_ptr = s.size();
        }
        else if(s[i] == '*'){
            s.erase(res_ptr-1,2);
            res_ptr--;
            i--;
        }
        else if(s[i] == '#'){
            s.erase(s.begin()+i);
            if(num) num=false;
            else num = true;
        }
        else {
            if(isdigit(s[i])){
                if(num){
                    s.insert(s.begin()+res_ptr, s[i]);
                    s.erase(s.begin()+(i+1));
                    res_ptr++;
                    i++;
                }else{
                    s.erase(s.begin()+i);
                }
            }else{
                s.insert(s.begin()+res_ptr, s[i]);
                s.erase(s.begin()+(i+1));
                res_ptr++;
                i++;
            }
        }
    }
    return s;*/


}

int main(){
    string s("*HE*<L0#L1>O");
    //string s("*HE*<LL>O");
    cout << receivedText(s);
}
