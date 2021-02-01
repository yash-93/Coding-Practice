class Solution {
public:
    struct Orange {
        int time;
        int x;
        int y;
    };
    
    int x[4] = {-1, 0, 1, 0};
    int y[4] = { 0, 1, 0, -1};
    
    int totalFreshOranges = 0;
    queue<Orange> rottenOranges;
    int res = 0;
    int orangesRotting(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(grid[i][j] == 2)
                    rottenOranges.push(Orange{0, i, j});
                else if(grid[i][j] == 1)
                    totalFreshOranges++;
            }
        }

        while(!rottenOranges.empty()){
            Orange currRottenOrange = rottenOranges.front();
            for(int i=0; i<4; i++){
                int tX = currRottenOrange.x + x[i];
                int tY = currRottenOrange.y + y[i];
                if(tX >=0 && tY >= 0 && tX < n && tY < m){
                    if(grid[tX][tY] == 1){
                        grid[tX][tY] = 2;
                        rottenOranges.push(Orange{currRottenOrange.time + 1, tX, tY});
                        totalFreshOranges--;
                    }
                }
            }
            res = currRottenOrange.time;
            rottenOranges.pop();
        }
        
        if(totalFreshOranges == 0) return res;
        else return -1;
    }
};