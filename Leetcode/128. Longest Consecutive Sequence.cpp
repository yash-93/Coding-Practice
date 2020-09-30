class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int> hashSet;
        for(auto num:nums)
            hashSet.insert(num);
        
        int maxx = 0;
        
        for(auto num:nums){
            if(!hashSet.count(num-1)) {
                int curr = num;
                int maxCurr = 1;
                
                while(hashSet.count(curr+1)) {
                    curr += 1;
                    maxCurr += 1;
                }
                maxx = max(maxx, maxCurr);
            }
        }
        return maxx;
    }
};