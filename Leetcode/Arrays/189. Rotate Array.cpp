class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        
        k = k % nums.size();
        
        int i = nums.size() - 1;
        int j = 0;
        
        while(j<i){
            int temp = nums[i];
            nums[i] = nums[j];
            nums[j] = temp;
            j++;
            i--;
        }
        
        j = 0;
        i = k - 1;
        
        while(j<i){
            int temp = nums[i];
            nums[i] = nums[j];
            nums[j] = temp;
            j++;
            i--;
        }
        
        j = k;
        i = nums.size() - 1;
        
        while(j<i){
            int temp = nums[i];
            nums[i] = nums[j];
            nums[j] = temp;
            j++;
            i--;
        }
        
    }
};