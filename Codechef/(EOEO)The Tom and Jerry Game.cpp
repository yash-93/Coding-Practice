#include <iostream>
using namespace std;

void test(){
    long long TS; cin >> TS;
    long long res = 0;

    if(TS % 2 != 0){
        res = (TS-1)/2;
    }else{
        while(TS%2 == 0)
            TS /= 2;
        res = (TS-1)/2;
    }

    cout << res << "\n";
}

int main() {
	int T; cin >> T;
	while(T--)
	    test();
	return 0;
}
