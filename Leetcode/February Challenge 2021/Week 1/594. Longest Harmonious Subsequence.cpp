class Solution {
public:
    int findLHS(vector<int>& nums) {
        int ans = 0;
        unordered_map<int, int> map;
        for(auto a : nums) {
            map[a]++;
        }
        
        for(auto b : map) {
            auto found = map.find(b.first+1);
            if(found != map.end()) {
                ans = max(ans, b.second+found->second);
            }
        }
        return ans;
    }
};