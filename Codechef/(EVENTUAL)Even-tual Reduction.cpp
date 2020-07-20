#include <bits/stdc++.h>
using namespace std;

void test(){
    int n; cin >> n;
    string s; cin >> s;
    unordered_map<char,int> f;
    for(auto c:s){
        if(!f[c])
            f[c] = 1;
        else
            f[c] += 1;
    }
    
    for(auto it=f.begin(); it!=f.end(); it++){
        if(it->second % 2 != 0){
            cout <<"NO" << endl;
            return;
        }
    }
    
    cout << "YES" << endl;
}

int main() {
	// your code goes here
	int t; cin >> t;
	while(t--)
	    test();
	return 0;
}
