#include <bits/stdc++.h>
using namespace std;

void test(){
    int h,p; cin >> h >> p;
    long sum = 0;
    while(h>0 && p>0){
        sum += p;
        p = floor(p/2);
        if(sum >= h){
            cout << 1 << "\n";
            return;
        }
    }
    cout << 0 << "\n";
}

int main() {
	// your code goes here
	int t; cin >> t;
	while(t--)
	    test();
	return 0;
}

