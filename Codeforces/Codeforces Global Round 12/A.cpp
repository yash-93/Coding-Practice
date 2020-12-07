#include <bits/stdc++.h>
using namespace std;

#define ll long long

void test(){
    int n;
    cin >> n;
    string a;
    cin >> a;

    int l = 0;
    int r = n-1;

    while(l<r){
        if(a[r] == 'b'){
            while(a[l] == 'b' && l < r)
                l++;
            if(a[l] != 'b'){
                char temp = a[r];
                a[r] = a[l];
                a[l] = temp;
                l++;
            }
        }
        r--;
    }
    cout << a << endl;
}

int main(){
    int t; cin >> t;
    while(t--)
        test();
    return 0;
}
