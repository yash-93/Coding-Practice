#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int change(int amount, vector<int>& coins) {
        int n = coins.size();

        if(amount == 0) {
            return 1;
        }
        if(n==0)
          return 0;

        int dp[n+1][amount+1];

        for(int i=0; i<=n; i++){
            dp[i][0] = 1;
        }

        for(int i=1; i<=amount; i++){
            dp[0][i] = 0;
        }

        for(int i=1; i<=n; i++){
            for(int j=1; j<=amount; j++){
                if(coins[i-1] <= j)
                    dp[i][j] = dp[i-1][j] + dp[i][j-coins[i-1]];
                else
                    dp[i][j] = dp[i-1][j];
            }
        }
        return dp[n][amount];

    }
};

int main(){
    vector<int> coins = {1,2,5};
    int amount = 5;
    Solution s;
    cout << s.change(amount, coins);
    return 0;
}
