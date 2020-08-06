class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int n = nums.size();
        vector<int> res;
        int ind;
        for(int i=0 ; i<n; i++){
            ind = abs(nums[i])-1;
            if(nums[ind]<0)
                res.push_back(abs(nums[i]));
            else
                nums[ind] = -nums[ind];
        }

        return res;
    }
};