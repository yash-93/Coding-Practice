class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int sum = 0;
        bool res = false;
        for(auto it=nums.begin(); it!=nums.end(); it++){
            sum += *it;
        }
        if(sum%2==1) return res;
        int targetSum = sum/2;
        int dp[nums.size()][targetSum+1];
        for(int i=0; i<nums.size(); i++) dp[i][0] = true;
        for(int i=1; i<=targetSum; i++){
            if(i==nums[0]){
                dp[0][i] = true;
                continue;
            }
            dp[0][i] = false;
        }
        
        for(int i=1; i<nums.size(); i++){
            for(int j=1; j<=targetSum; j++){
                if(j<nums[i])
                    dp[i][j] = dp[i-1][j];
                else
                    dp[i][j] = dp[i-1][j] || dp[i-1][j-nums[i]];
            }
        }
        
        if(dp[nums.size()-1][targetSum]) res=true;
        return res;
    }
};