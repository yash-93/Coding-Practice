class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        vector<vector<int>> dp(obstacleGrid.begin(), obstacleGrid.end());
        
        int n = dp.size();
        int m = dp[0].size();
        
        if(dp[0][0] == 1){
            dp[0][0] = 0;
        }else{
            dp[0][0] = 1;
        }
        
        for(int i=1; i<m; i++){
            if(dp[0][i]==1){
                dp[0][i] = 0;
                continue;
            }
            dp[0][i] = dp[0][i-1];
        }
        
        for(int i=1; i<n; i++){
            if(dp[i][0]==1){
                dp[i][0] = 0;
                continue;
            }
            dp[i][0] = dp[i-1][0];
        }
        
        for(int i=1; i<n; i++){
            for(int j=1; j<m; j++){
                if(dp[i][j] == 1){
                    dp[i][j] = 0;
                    continue;
                }
                dp[i][j] = dp[i-1][j] + dp[i][j-1];
            }
        }
        
        return dp[n-1][m-1];
    }
};