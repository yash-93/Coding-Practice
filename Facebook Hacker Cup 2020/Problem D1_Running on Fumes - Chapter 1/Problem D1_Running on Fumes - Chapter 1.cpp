#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

ll getMinCost(ll i, ll c, ll n, ll m, vector<ll> C, vector<ll> &cost, unordered_map<int,int> &dp){
    ll sum = 0;
    if(n-i-1 >= m){
        for(ll j=1; j<=m; j++){
            if(i+j == n-1){
                cost.push_back(c);
                dp[i+j] = 0;
            }else if(C[i+j] == 0){
                dp[i+j] = 0;
            }
            else {
                if(!dp[i+j]){
                    sum += getMinCost(i+j, c+C[i+j], n, m, C, cost, dp);
                    dp[i+j] = sum;
                }
                else{
                    sum += dp[i+j];
                }
            }
        }
    }else{
        for(ll j=1; j<=n-i-1; j++){
            if(i+j == n-1){
                cost.push_back(c);
                dp[i+j] = 0;
            }else if(C[i+j] == 0){
                dp[i+j] = 0;
            }
            else {
                if(!dp[i+j]){
                    sum += getMinCost(i+j, c+C[i+j], n, m, C, cost, dp);
                    dp[i+j] = sum;
                }
                else{
                    sum += dp[i+j];
                }
            }
        }
    }
    //cout << sum << "*";
    return sum;
}

void test(int t){
    ll n,m; cin >> n >> m;
    vector<ll> C(n);

    for(ll i=0; i<n; i++){
        cin >> C[i];
    }


    unordered_map<int,int> dp;

    vector<ll> cost;
    dp[0] = getMinCost(0, 0, n, m, C, cost, dp);

    //cout << dp[0];

    if(cost.size()>0)
        cout << "Case #" << t << ": " << *min_element(cost.begin(), cost.end()) << "\n";
    else
        cout << "Case #" << t << ": " << "-1" << "\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif // ONLINE_JUDGE
    int t; cin >> t;
    int val = 0;
    while(val<t){
        test(val+1);
        val++;
    }
    return 0;
}
