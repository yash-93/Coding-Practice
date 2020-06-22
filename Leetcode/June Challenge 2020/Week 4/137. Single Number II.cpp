class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int result = 0;
    for(int i = 0; i < 32; i++) {
        int count  = 0;
        for(int j = 0; j < nums.size(); j++) {
            if((nums[j] & (1 << i)) != 0) {
                count++;
            }
        }
        result = result | ((count % 3) << i);
    }
    return result;
    }
};