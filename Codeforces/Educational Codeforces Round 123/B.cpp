#include <bits/stdc++.h>
using namespace std;

#define ll long long

void test(){
    int n; cin >> n;
    if(n == 3) {
        cout << "3 2 1\n1 3 2\n3 1 2\n";
        return;
    }

    vector<int> arr;
    for(int i = n; i > 0; i--) arr.push_back(i);

    for(int i = 0; i < n; i++) {
        for(int j = i; j < n; j++) {
            cout << arr[j] << " ";
        }

        for(int j = 0; j < i; j++) {
            cout << arr[j] << " ";
        }
        cout << endl;
    }
}

int main(){
    int t; cin >> t;
    while(t--)
        test();
    return 0;
}
