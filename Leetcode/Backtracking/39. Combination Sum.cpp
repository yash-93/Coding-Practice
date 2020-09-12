class Solution {
private:
    void CS(vector<vector<int>> &res, vector<int> &path, vector<int> candidates, int target, int curr){
        if(target == 0)
        {
            res.push_back(path);
            return;
        }
        
        for(int i=curr; i!=candidates.size() && target>=candidates[i]; i++){
            path.push_back(candidates[i]);
            CS(res, path, candidates, target-candidates[i], i);
            path.pop_back();
        }

    }

public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<vector<int>> res;
        vector<int> path;
        CS(res, path, candidates, target, 0);
        return res;
    }
};