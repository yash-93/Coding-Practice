class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        if(nums[0] >= 0){
            for(int i=0; i<n; i++)
                nums[i] *= nums[i];
            return nums;
        }
        
        vector<int> res;
        if(nums[0] < 0 && nums[n-1] < 0){
            for(auto it=nums.rbegin(); it!=nums.rend(); it++)
                res.push_back(abs(*it)*abs(*it));
            return res;
        }

        int f = 0;
        int s = 0;
        while(nums[s] < 0) s++;
        f = s - 1;
        while(f>=0 && s<n){
            if(nums[s] < abs(nums[f])){
                res.push_back(nums[s]*nums[s]);
                cout << nums[s]*nums[s] << " ";
                s++;
            }else if(nums[s] > abs(nums[f])){
                res.push_back(abs(nums[f])*abs(nums[f]));
                cout << abs(nums[f])*abs(nums[f]) << " ";
                f--;
            }else if(nums[s] == abs(nums[f])){
                res.push_back(nums[s]*nums[s]);
                res.push_back(nums[s]*nums[s]);
                cout << nums[s]*nums[s] << " ";
                cout << nums[s]*nums[s] << " ";
                f--;
                s++;
            }
        }
        
        while(f>=0){
            res.push_back(abs(nums[f])*abs(nums[f]));
            f--;
        }
        while(s < n){
            res.push_back(nums[s]*nums[s]);
            s++;
        }
        
        return res;
    }
};