class Solution {
public:
    int longestCommonSubsequence(string x, string y) {
        int n = x.size();
        int m = y.size();
        int t[n+1][m+1];

        for(int i=0; i<=n; i++)
            t[i][0] = 0;

        for(int i=0; i<=m; i++)
            t[0][i] = 0;

        for(int i=1; i<=n; i++){
            for(int j=1; j<=m; j++){
                if(x[i-1] == y[j-1])
                    t[i][j] = 1 + t[i-1][j-1];
                else
                    t[i][j] = max(t[i][j-1],t[i-1][j]);
            }
        }
        return t[n][m];
    }
};
