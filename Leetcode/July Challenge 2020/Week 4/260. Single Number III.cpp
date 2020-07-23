// O(1) space complexity
// O(n) time complexity

class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int res = 0;
        int len = nums.size();
        for(int i=0; i<len; i++)
            res ^= nums[i];

        int mask = res & -res;

        int first = 0;
        for(int i=0; i<len; i++){
            if(mask & nums[i])
                first ^= nums[i];
        }

        int second = res ^ first;

        return {first,second};
    }
};

// **************************************

// O(1) space complexity
// O(n) time complexity
/*
class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        unordered_map<int,int> freq;
        for(int i=0; i<nums.size(); i++){
            if(freq.find(nums[i]) == freq.end())
                freq[nums[i]] = 1;
            else
                freq[nums[i]] += 1;
        }

        vector<int> res;
        for(auto i:freq){
            if(i.second == 1)
                res.push_back(i.first);
            if(res.size() == 2)
                break;
        }

        return res;
    }
};
*/
