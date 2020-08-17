#include<bits/stdc++.h>
using namespace std;

void test(int t){
    int n; cin >> n;
    string I; cin >> I;
    string O; cin >> O;

    vector<vector<char>> res(n,vector<char>(n, 'N'));
    for(int i=0; i<n; i++){
        res[i][i] = 'Y';
        if(O[i] == 'Y'){
            for(int r=i; r<n-1; r++){
                if(O[r] == 'Y' && I[r+1]=='Y'){
                    res[i][r+1] = 'Y';
                }else{
                    break;
                }
            }
            for(int l=i; l>0; l--){
                if(O[l] == 'Y' && I[l-1]=='Y'){
                    res[i][l-1] = 'Y';
                }else{
                    break;
                }
            }
        }
    }
    cout<<"Case #" << t << ":\n";
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << res[i][j];
        }cout << endl;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif // ONLINE_JUDGE
    int t,temp=0; cin >> t;
    while(temp<t){
        test(temp+1);
        temp++;
    }
    return 0;
}
