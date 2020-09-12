class Solution {
private:
    void CS(vector<vector<int>> &res, vector<int> &path, int start, int k, int sum){
        if(sum == 0 && k ==0){
            res.push_back(path);
            return;
        }
        
        for(int i=start; i<=10-k && i<=sum; i++){
            path.push_back(i);
            CS(res, path, i+1, k-1, sum-i);
            path.pop_back();
        }

    }

public:
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> res;
        vector<int> path;
        CS(res, path, 1, k, n);
        return res;
    }
};