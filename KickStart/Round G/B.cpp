#include <bits/stdc++.h>
using namespace std;

#define ll long long

void test(int t){
    ll n; cin >> n;
     vector<vector<ll>> grid(n);

     for(ll i=0; i<n; i++){
        vector<ll> row(n);
        for(ll j=0; j<n; j++){
            cin >> row[j];
        }
        grid[i] = row;
     }

     ll maxs = INT_MIN;

     for(ll i=0; i<n; i++){
        ll tempSum = 0;
        int tempI = i;
        ll j = 0;
        while(tempI!=n){
            tempSum += grid[tempI][j];
            tempI++;
            j++;
        }
        maxs = max(maxs, tempSum);
     }

     for(ll j=1; j<n; j++){
        ll tempSum = 0;
        int tempJ = j;
        ll i = 0;
        while(tempJ!=n){
            tempSum = (tempSum + grid[i][tempJ]);
            i++;
            tempJ++;
        }
        maxs = max(maxs, tempSum);
     }

    cout << "Case #" << t << ": " << maxs << "\n";
}

int main(){
    ll t; cin >> t;

    for(ll i=0; i<t; i++)
        test(i+1);

    return 0;
}
