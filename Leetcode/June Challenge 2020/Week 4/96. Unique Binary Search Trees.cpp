class Solution {
public:
    long long CatalanNumber(long long n, long long r){
        long long ans = 1;
        for(long long i=0; i<r; i++){
            ans = ans*(n - i)/(i+1);
        }
        return ans;
    }
    int numTrees(long long n) {
        return CatalanNumber(2*n,n)/(n+1);
    }
};