#include <bits/stdc++.h>
using namespace std;

void test(){
    int n; cin >> n;
    vector<int> a(n);
    map<int,int> m;
    bool zero = false;
    for(int i=0; i<n; i++){
        cin >> a[i];
        if(a[i] == 0)
            zero = true;
        m[a[i]] += 1;
    }

    if(zero)
        cout << m.size()-1 << endl;
    else
        cout << m.size() << endl;

}

int main() {
	// your code goes here
	int t; cin >> t;
	while(t--)
	    test();
	return 0;
}
