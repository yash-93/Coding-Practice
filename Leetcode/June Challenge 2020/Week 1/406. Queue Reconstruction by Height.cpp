class Solution {
public:
    vector<vector<int>> reconstructQueue(vector<vector<int>>& people) {
         vector<vector<int>> result;

        for (auto& v : people) {
            v[0] = -v[0];
        }
        sort(people.begin(), people.end());

        for (auto& v : people) {
            v[0] = -v[0];
            result.insert(result.begin() + v[1], v);
        }
        return result;
    }
};
