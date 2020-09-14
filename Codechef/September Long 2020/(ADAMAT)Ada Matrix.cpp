#include <bits/stdc++.h>
using namespace std;

void test(){
    int n; cin >> n;
    vector<vector<int>> mat(n,vector<int> (n));

    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            cin >> mat[i][j];

    int res = 0;

    for(int i=n-1; i>0; i--){
        if(mat[i][0] != (i*n)+1){
            res++;
            // transpose matrix
            for(int p=0; p<=i; p++){
                for(int q=p; q<=i; q++){
                    int temp = mat[p][q];
                    mat[p][q] = mat[q][p];
                    mat[q][p] = temp;
                }
            }
        }
    }
    cout << res << endl;
}

int main(){
    int t; cin >> t;
    while(t--)
        test();
    return 0;
}
