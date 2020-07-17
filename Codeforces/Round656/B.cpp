#include <bits/stdc++.h>
using namespace std;

void test(){
    int n;
    cin >> n;
    vector<int> a(2*n);
    unordered_map<int,int> freq;
    for(int i=0; i<n; i++){
        freq[i+1] = 1;
    }
    for(int i=0; i<2*n; i++){
        cin >> a[i];
    }

    for(int i=0; i<2*n; i++){
        if(freq[a[i]] > 0){
            cout << a[i] << " ";
            freq[a[i]] = 0;
        }
    }
    cout << endl;

}

int main(){
    int t; cin >> t;
    while(t--)
        test();
    return 0;
}
