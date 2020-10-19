class Solution {
public:
    vector<vector<int>> restoreMatrix(vector<int>& rowSum, vector<int>& colSum) {
        int n = rowSum.size();
        int m = colSum.size();
        
        vector<vector<int>> matrix(n, vector<int> (m));
        
        for(int row=0; row<n; row++){
            for(int col=0; col<m; col++){
                int curEle = min(rowSum[row], colSum[col]);
                matrix[row][col] = curEle;
                rowSum[row] -= curEle;
                colSum[col] -= curEle;
            }
        }
        
        return matrix;
        
    }
};