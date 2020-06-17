class Solution {
public:
    void dfs(vector<vector<char>>& board, int i, int j){
        if(i > board.size()-1 || i < 0 || j > board[0].size() || j < 0)
            return;
        
        if(board[i][j] = 'O')
            board[i][j] = '*';
        
        if(i>0 && board[i-1][j] == 'O')
            dfs(board, i-1, j);
            
        if(j>0 && board[i][j-1] == 'O')
            dfs(board, i, j-1);

        if(i<board.size()-1 && board[i+1][j] == 'O')
            dfs(board, i+1, j);

        if(j<board[0].size()-1 && board[i][j+1] == 'O')
            dfs(board, i, j+1);

    }
    
    void solve(vector<vector<char>>& board) {
        if(board.size() == 0)
            return;
        int rows = board.size();
        int cols = board[0].size();
        
        for(int i=0; i<cols; i++){
            if(board[0][i] == 'O')
                dfs(board, 0, i);
            if(board[rows-1][i] == 'O')
                dfs(board, rows-1, i);
        }
        
        for(int j=0; j<rows; j++){
            if(board[j][0] == 'O')
                dfs(board, j, 0);
            if(board[j][cols-1] == 'O')
                dfs(board, j, cols-1);
        }
        
        for(int i=0; i<rows; i++){
            for(int j=0; j<cols; j++){
                if(board[i][j] == '*') board[i][j] = 'O';
                else if(board[i][j] == 'O') board[i][j] = 'X';
            }
        }
        
    }
};