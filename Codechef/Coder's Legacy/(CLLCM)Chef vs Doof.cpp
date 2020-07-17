#include <bits/stdc++.h>
using namespace std;

void test(){
    int n; cin >> n;
    string res = "Yes";
    vector<int> a(n);
    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    for(int i=0; i<n; i++){
        if(a[i]%2 == 0)
        {
            res = "No";
            break;
        }
    }

    cout << res << "\n";
}

int main() {
	int t; cin >> t;
	while(t--)
	    test();
	return 0;
}
