#include <iostream>
using namespace std;

void test(){
    int n, *a; cin >> n;
    a = new int[n];

    int chef_coins[] = {0,0,0};

    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    string res = "YES";



    for(int i=0; i<n; i++){
        if(a[i] == 5){
            chef_coins[0] += 1;
        }else if(a[i] == 10){
            if(!chef_coins[0]){
                res = "NO";
                break;
            }
            chef_coins[0]--;
            chef_coins[1]++;
        }else if(a[i] == 15){
            if(!chef_coins[1] && chef_coins[0]<2){
                res = "NO";
                break;
            }
            if(chef_coins[1])
                chef_coins[1]--;
            else
                chef_coins[0] -= 2;
        }
    }
    cout << res << "\n";
}

int main() {
	int T; cin >> T;
	while(T--)
	    test();
	return 0;
}

