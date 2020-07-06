#include <bits/stdc++.h>
using namespace std;

void test(){
    int k; cin >> k;
    vector<char> row;
    row.assign(9,'#');
    vector<vector<char> > board;
    board.assign(9, row);

    for(int i=1; i<=8; i++){
        for(int j=1; j<=8; j++){
            if(k>0){
                board[i][j] = '.';
                --k;
            }
        }
    }
    board[1][1] = 'O';

    if(board[1][1]=='O' && board[2][1] != '.'){
        board[2][1] = 'X';
    }
    if(board[1][1]=='O' && board[1][2] != '.'){
        board[1][2] = 'X';
    }
    if(board[1][1]=='O' && board[2][2] != '.'){
        board[2][2] = 'X';
    }
    bool out = false;

    for(int i=1; i<=8; i++){
        for(int j=1; j<=8; j++){
            if(board[i][j] == '.'){
                if(i+1<=8){
                    if(board[i+1][j] != '.'){
                        board[i+1][j] = 'X';
                    }
                }
                if(j+1<=8){
                    if(board[i][j+1] != '.'){
                        board[i][j+1] = 'X';
                    }
                }
                if(i+1<=8 && j+1<=8){
                    if(board[i+1][j+1] != '.'){
                        board[i+1][j+1] = 'X';
                    }
                }
            }else if(board[i][j] == 'X'){
                out = true;
                break;
            }
        }
        if(out) break;
    }

    for(int i=1; i<9; i++){
        for(int j=1; j<9; j++){
            if(board[i][j] == '#'){
               board[i][j] = '.';
            }
        }
    }

    for(int i=1; i<9; i++){
        for(int j=1; j<9; j++){
            cout << board[i][j];
        }
        cout << endl;
    }
    cout<<endl;
}

int main(){
    int t;cin >> t;
    while(t--)
        test();

    return 0;
}
