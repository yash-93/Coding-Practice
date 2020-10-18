#include <bits/stdc++.h>
using namespace std;

#define ll long long

void test(){
    int n; cin >> n;

    vector<vector<char>> grid(n+1);

    for(int i=1; i<=n; i++){
        vector<char> row(n+1);
        for(int j=1; j<=n; j++){
            cin >> row[j];
        }
        grid[i] = row;
    }
    vector<pair<int,int>> res;


    if(grid[1][2] == '0' && grid[2][1] == '0'){
        if(grid[n][n-1] == '1' && grid[n-1][n] == '1')
            cout << 0 << endl;
        else if(grid[n][n-1] == '0' && grid[n-1][n] == '0'){
            cout << 2 << endl;
            res.push_back({n,n-1});
            res.push_back({n-1,n});
        }else if(grid[n][n-1] == '1' && grid[n-1][n] == '0'){
            cout << 1 << endl;
            res.push_back({n-1,n});
        }else{
            cout << 1 << endl;
            res.push_back({n,n-1});
        }
    }else if(grid[1][2] == '1' && grid[2][1] == '1'){
        if(grid[n][n-1] == '0' && grid[n-1][n] == '0')
            cout << 0 << endl;
        else if(grid[n][n-1] == '1' && grid[n-1][n] == '1'){
            cout << 2 << endl;
            res.push_back({n,n-1});
            res.push_back({n-1,n});
        }else if(grid[n][n-1] == '1' && grid[n-1][n] == '0'){
            cout << 1 << endl;
            res.push_back({n,n-1});
        }else{
            cout << 1 << endl;
            res.push_back({n-1,n});
        }
    }else if(grid[1][2] == '1' && grid[2][1] == '0'){
        if(grid[n][n-1] == '1' && grid[n-1][n] == '1'){
            cout << 1 << endl;
            res.push_back({1,2});
        }
        else if(grid[n][n-1] == '0' && grid[n-1][n] == '0'){
            cout << 1 << endl;
            res.push_back({2,1});
        }else if(grid[n][n-1] == '1' && grid[n-1][n] == '0'){
            cout << 2 << endl;
            res.push_back({1,2});
            res.push_back({n-1,n});
        }else{
            cout << 2 << endl;
            res.push_back({1,2});
            res.push_back({n,n-1});
        }
    }else if(grid[1][2] == '0' && grid[2][1] == '1'){
        if(grid[n][n-1] == '1' && grid[n-1][n] == '1'){
            cout << 1 << endl;
            res.push_back({2,1});
        }
        else if(grid[n][n-1] == '0' && grid[n-1][n] == '0'){
            cout << 1 << endl;
            res.push_back({1,2});
        }else if(grid[n][n-1] == '1' && grid[n-1][n] == '0'){
            cout << 2 << endl;
            res.push_back({1,2});
            res.push_back({n-1,n});
        }else{
            cout << 2 << endl;
            res.push_back({1,2});
            res.push_back({n,n-1});
        }
    }


    for(auto i:res){
        cout << i.first << " " << i.second << endl;
    }
}

int main(){
    int t; cin >> t;
    while(t--)
        test();
    return 0;
}
