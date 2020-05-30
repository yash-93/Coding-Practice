#include <bits/stdc++.h>
using namespace std;

void test(){
    int A[5], P;
    int sum = 0;

    for(int i=0; i<5; i++){
        cin >> A[i];
        sum += A[i];
    }
    cin >> P;

    int tot_time = P*sum;

    if(tot_time <= (24*5))
        cout << "No\n";
    else
        cout <<  "Yes\n";

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T; cin >> T;
    while(T--)
        test();

    return 0;
}
