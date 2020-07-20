#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

void test(){
    int n; cin >> n;
    std::vector<ll> a(n);

    for(int i=0; i<n; i++)
        cin >> a[i];
    ll bor = 0;
    bool cont = true;
    unordered_set<ll> s;
    for(int i=0; i<n; i++){
        bor = 0;
        for(int j=i; j<n; j++){
                bor |= a[j];
            if(s.find(bor) == s.end()){
                s.insert(bor);
            }
            else{
                cont = false;
                break;
            }
        }
        if(!cont) break;
    }

    if(cont)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

int main() {
	int t; cin >> t;
	while(t--)
	    test();
	return 0;
}
