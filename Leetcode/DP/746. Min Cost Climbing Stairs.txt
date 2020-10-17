// Recursive
class Solution {
private:
    int minCost(vector<int>& cost, int i, int tot, int n){
       if(i > n)
          return tot;

       return min(minCost(cost, i+1, tot+cost[i], n),  minCost(cost, i+2, tot+cost[i], n));
    }
    
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size() - 1;
        return min(minCost(cost, 0, 0, n), minCost(cost, 1, 0, n));
    }
};

// DP
class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        int dp[n];
        dp[0]=cost[0];
        dp[1]=cost[1];
        for(int i=2;i<n;i++)
            dp[i]=min(dp[i-2],dp[i-1])+cost[i];
    
        return min(dp[n-1],dp[n-2]);
    }
};