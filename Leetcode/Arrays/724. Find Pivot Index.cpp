class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        if(n==0) return -1;
        if(n==1) return 0;
        
        int leftSum = 0;
        int totalSum = 0;
        for(int i=0; i<n; i++) totalSum += nums[i];
        for(int i=0; i<n; i++){
            totalSum -= nums[i];
            if(leftSum == totalSum) return i;
            leftSum += nums[i];
        }
        
        return -1;
    }
};