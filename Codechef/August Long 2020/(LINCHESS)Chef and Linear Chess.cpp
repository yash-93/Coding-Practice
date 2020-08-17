#include <bits/stdc++.h>
using namespace std;

void test(){
    int n,k;
    cin >> n >> k;
    vector<int> p(n);
    for(int i=0; i<n;i++)
        cin >> p[i];

    int res = -1;

    for(auto val:p){
        if(k%val == 0){
            res = val > res ? val : res;
        }
    }

    cout << res << "\n";
}

int main() {
	// your code goes here
	int t; cin >> t;
	while(t--)
	    test();
	return 0;
}

