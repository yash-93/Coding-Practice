#include <iostream>
using namespace std;

void test(){
    string s;
    cin >> s;

    int len = s.size();
    int i = 0, pairs = 0;
    while(i<len-1){
        if(s[i] != s[i+1]){
            pairs++;
            i += 2;
        }else if(s[i] == s[i+1]){
            i++;
        }
    }
    cout << pairs << "\n";
}

int main() {
	int T; cin >> T;
	while(T--)
	    test();
	return 0;
}
