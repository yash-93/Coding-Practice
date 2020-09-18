class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int maxSum = nums[0];
        int currSum = maxSum;
        
        for(int i=1; i<n; i++){
            currSum = max(nums[i], currSum+nums[i]);
            maxSum = max(currSum, maxSum);
        }
        return maxSum;
    }
};