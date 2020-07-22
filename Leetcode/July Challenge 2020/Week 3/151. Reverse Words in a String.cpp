#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

void test(string s){
    /*string res = "";
        int i=0;
        while(s[i] == ' '){
            i++;
        }

        string word = "";
        while(i<s.size()){
            if(s[i] != ' '){
                word.push_back(s[i]);
                i++;
            }else
            {
                res.insert(0,word);
                word = "";
                res.insert(0," ");
                while(s[i] == ' '){
                    i++;
                }
            }
        }
        res.insert(0,word);

        i = 0;
        while(res[i] == ' '){
            i++;
        }
        res = res.substr(i,res.size()-i);
        cout << res;*/

        /*string temp = "";
        int i = 0;
        string res = "";
        while(i<s.size()){
            if(s[i] == ' '){
                i++;
            }
            else
            {
                temp.push_back(s[i]);
                i++;
                while(s[i] != ' ' && i<s.size()){
                    temp.push_back(s[i]);
                    i++;
                }
                res.insert(0, temp);
                res.insert(0, " ");
                temp = "";
                i++;
            }
        }
        if(res.size() > 0)
            res = res.substr(1,res.size()-1);
        cout << res;*/

            string res = "";

            int i = s.size() - 1;
            int j = s.size() - 1;

            while(i>=0){
                if(s[i] == ' '){
                    i--;j--;
                }
                else
                {
                    i--;
                    while(i>=0 && s[i] != ' '){
                        i--;
                    }
                    res.append(s.substr(i+1,j-i));
                    res.append(" ");
                    i--;
                    j=i;
                }
            }
        res = res.substr(0,res.size()-1);
        cout << res;
        cout<<".";
}

int main() {
    string s = "a good   example";
    test(s);
	return 0;
}

