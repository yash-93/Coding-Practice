#include <bits/stdc++.h>
using namespace std;

#define ll long long

void test(int t){
    int n; cin >> n;
    vector<int> a(n);

    for (int i=0; i<n; i++)
        cin >> a[i];

    vector<int> diff(n-1);
    
    for(int i=0; i<n-1; i++){
        diff[i] = a[i] - a[i+1];
    }
    
    int max = 0;
    
    int count = 0;
    
    for(int i=0; i<n-2; i++){
        if(diff[i+1] == diff[i]){
            count++;
        }
        else{
            max = count>max ? count : max;
            count = 0;
        }
        if(i == n-3){
            max = count>max ? count : max;
        }
    }

    cout << "Case #" << t << ": " << max+2 << "\n";
}

int main(){
    int t; cin >> t;

    for(int i=0; i<t; i++)
        test(i+1);

    return 0;
}
