#include <bits/stdc++.h>
#include <string>
using namespace std;

#define for(i,n) for(int i=0; i<n; i++)

vector<vector<int> > bomb_loc;

vector<string> getAllBombGrid(vector<string> g, int r, int c){
    for(i,r){
        for(j,c){
            g[i][j] = 'o';
        }
    }
    return g;
}

void getBombLocations(vector<string> g, int r, int c){
    for(i,r){
        for(j,c){
            if (g[i][j]=='o'){
                vector<int> loc;
                loc.push_back(i);
                loc.push_back(j);
                bomb_loc.push_back(loc);
            }
        }
    }
}

vector<vector<int> > getNewBombLocations(vector<string> g, int r, int c){
    vector<vector<int> > new_bomb_loc = {};
    for(i,r){
        for(j,c){
            if (g[i][j]=='.'){
                vector<int> loc;
                loc.push_back(i);
                loc.push_back(j);
                new_bomb_loc.push_back(loc);
            }
        }
    }
    return new_bomb_loc;
}

vector<string> doBlast(vector<vector<int> > bomb_loc, vector<string> g, int r, int c){
    for(i,bomb_loc.size()){
        g[bomb_loc[i][0]][bomb_loc[i][1]] = '.';
        if((bomb_loc[i][0])+1 < r)
            g[(bomb_loc[i][0])+1][bomb_loc[i][1]] = '.';
        if((bomb_loc[i][0])-1 > -1)
            g[(bomb_loc[i][0])-1][bomb_loc[i][1]] = '.';
        if((bomb_loc[i][1])+1 < c)
            g[bomb_loc[i][0]][(bomb_loc[i][1])+1] = '.';
        if((bomb_loc[i][1])-1 > -1)
            g[bomb_loc[i][0]][(bomb_loc[i][1])-1] = '.';
    }

    return g;
}

void print(vector<string> g, int r, int c){
    for(i,r){
        for(j,c){
            cout << g[i][j] << " ";
        }
        cout << endl;
    }
}

void test(int n, vector<string> grid){
    int r = grid.size(), c = grid[0].length();
    vector<string> allBombGrid = getAllBombGrid(grid, r, c);

    if(n==1){
        print(grid, r, c);
    }
    else if(n%2==0){
        print(allBombGrid, r, c);
    }
    else
    {
        vector<vector<int> > new_loc;
        for(k,n){
            if (k==0){
                getBombLocations(grid, r, c);
            }
            else if(k%2!=0){
                grid = allBombGrid;
            }
            else if(k%2==0){
                grid = doBlast(bomb_loc, grid, r, c);
                bomb_loc = {};
                getBombLocations(grid, r, c);
            }
        }
        print(grid, r, c);
    }
}


int main()
{
    vector<string> grid = {".......", "...o.o.", "....o..", "..o....", "oo...oo", "oo.o..."};
    //vector<string> grid = {".......", "...o...", "....o..", ".......", "oo.....", "oo....."};
    //fastio;
    //ll T;
    //cin >> T;
    //for (i,T){
    int n = 5;
        test(n, grid);
    //}
    return 0;
}
