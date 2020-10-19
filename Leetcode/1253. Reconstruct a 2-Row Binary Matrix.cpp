class Solution {
public:
    vector<vector<int>> reconstructMatrix(int upper, int lower, vector<int>& colsum) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int n = colsum.size();
        vector<vector<int> > res(2, vector<int>(n, 0));
        int sumUp = 0, sumLo = 0;
        for(int i = 0; i < n; i++)
                if(colsum[i] == 2)
                        res[0][i] = 1, res[1][i] = 1, sumUp++, sumLo++;
        for(int i = 0; i < n; i++)
        {
            if(colsum[i] == 1)
            {
                if(sumUp < upper)
                        res[0][i] = 1, sumUp++;
                else
                        res[1][i] = 1, sumLo++;
            }
        }
        if(sumUp != upper || sumLo != lower)
                return {};
        return res;
    }
};