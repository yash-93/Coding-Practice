class Solution {
public:
    int maxSumAfterPartitioning(vector<int>& A, int K) {
        int n = A.size();
        vector<int> f(n+1,0);
        
        for(int i=1; i<n+1; i++){
            int max_num = INT_MIN;
            for(int j=1; j<min(i,K)+1; j++){
                max_num = max(max_num, A[i-j]);
                f[i] = max(f[i], f[i-j]+j*max_num);
            }
        }
        return f[n];
    }
};