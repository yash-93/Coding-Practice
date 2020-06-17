class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        vector<int> res;
        if(nums.size() == 0){
            return res;
        }
        
        sort(nums.begin(), nums.end());
        vector<int> divCount(nums.size(), 1);
        vector<int> prev(nums.size(), -1);
        int max_ind = 0;
        
        for(int i=1; i<nums.size(); i++){
            for(int j=0; j<i; j++){
                if(nums[i]%nums[j] == 0){
                    if(divCount[i] < divCount[j]+1){
                        divCount[i] = divCount[j] + 1;
                        prev[i] = j;
                    }
                }
            }
            if(divCount[max_ind] < divCount[i]){
                max_ind = i;
            }
        }
        
        int k = max_ind;
        while(k >= 0){
            res.push_back(nums[k]);
            k = prev[k];
        }
        return res;
    }
};