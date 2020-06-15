#include <bits/stdc++.h>
using namespace std;

void test(){
    int n, k, val;
    cin >> n >> k;
    vector<int> p;
    int initial_revenue = 0;
    for(int i=0; i<n; i++){
        cin >> val;
        initial_revenue += val;
        p.push_back(val);
    }

    int changed_revenue = 0;

    for(auto i:p){
        if(i>k)
            changed_revenue += k;
        else
            changed_revenue += i;
    }

    cout << (initial_revenue - changed_revenue) << "\n";

}

int main() {
	int T; cin >> T;
	while(T--){
	    test();
	}

	return 0;
}
