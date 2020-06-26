class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int res=0;
        vector<bool> temp;
        temp.assign(nums.size()+1,false);
        for(int i=0; i<nums.size(); i++){
            if(!temp[nums[i]]){
                temp[nums[i]] = true;}
            else{
                res = nums[i];break;}
        }
        return res;
    }
};