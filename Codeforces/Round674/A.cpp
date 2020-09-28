#include <bits/stdc++.h>
using namespace std;

#define ll long long

void test(){
    int n, x;
    cin >> n >> x;

    if(n==1 || n==2){
        cout << 1 << endl;
        return;
    }


    int floor = 1;
    int min = 3;
    int max = min + (x-1);

    while(n > max){
        floor++;
        min = max+1;
        max = min + (x-1);
    }

    cout << floor + 1 << endl;

}

int main(){
    int t; cin >> t;
    while(t--)
        test();
    return 0;
}
