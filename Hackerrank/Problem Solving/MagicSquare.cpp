#include <bits/stdc++.h>
using namespace std;

int calcCost(vector<vector<int> > magic, vector<vector<int> > m, int i, int j) {
    if (magic[i][j] != m[i][j]) {
        if (magic[i][j] - m[i][j] < 0) {
            return -1 * (magic[i][j] - m[i][j]);
        } else {
            return magic[i][j] - m[i][j];
        }
    }
    return 0;
}

int main(){
    int cost[8] = {0};
    vector<vector<int> > m = {{5, 3, 4}, {1, 5, 8}, {6, 4, 2}};

    vector<vector<int> > magic1 = {{8, 1, 6}, {3, 5, 7}, {4, 9, 2}};
    vector<vector<int> > magic2 = {{6, 1, 8}, {7, 5, 3}, {2, 9, 4}};
    vector<vector<int> > magic3 = {{4, 3, 8}, {9, 5, 1}, {2, 7, 6}};
    vector<vector<int> > magic4 = {{2, 7, 6}, {9, 5, 1}, {4, 3, 8}};
    vector<vector<int> > magic5 = {{2, 9, 4}, {7, 5, 3}, {6, 1, 8}};
    vector<vector<int> > magic6 = {{4, 9, 2}, {3, 5, 7}, {8, 1, 6}};
    vector<vector<int> > magic7 = {{6, 7, 2}, {1, 5, 9}, {8, 3, 4}};
    vector<vector<int> > magic8 = {{8, 3, 4}, {1, 5, 9}, {6, 7, 2}};

    for(int i=0; i<m.size(); i++){
        for(int j=0; j<m.size(); j++){
            cost[0] += calcCost(magic1, m, i, j);
            cost[1] += calcCost(magic2, m, i, j);
            cost[2] += calcCost(magic3, m, i, j);
            cost[3] += calcCost(magic4, m, i, j);
            cost[4] += calcCost(magic5, m, i, j);
            cost[5] += calcCost(magic6, m, i, j);
            cost[6] += calcCost(magic7, m, i, j);
            cost[7] += calcCost(magic8, m, i, j);
        }
    }

    int min = cost[0];
    for (int i = 1; i < 8; i++) {
        if (min > cost[i])
            min = cost[i];
    }

    cout << min;

    return 0;
}
