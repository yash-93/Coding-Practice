class NumArray {
public:
    vector<int> dp;
    NumArray(vector<int>& nums) {
        int n = nums.size();
        dp.resize(n+1,0);
        for(int i=1;i<n+1;i++)
        {
            dp[i] = dp[i-1] + nums[i-1];
        }
    }
    
    int sumRange(int i, int j) {
        return (dp[j+1] - dp[i]);
    }
};