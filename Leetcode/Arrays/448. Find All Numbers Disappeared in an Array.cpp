class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();
        vector<int> res;
        for(int i=0 ; i<n; i++){
            int ind = abs(nums[i])-1;
            if(nums[ind]>0)
                nums[ind] = -nums[ind];
        }

        for(int i=0; i<n; i++){
            if(nums[i] > 0){
                res.push_back(i+1);
            }
        }
        return res;
    }
};