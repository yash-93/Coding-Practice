#include <bits/stdc++.h>
using namespace std;

void test(){
    int N, M, val;
    cin >> N >> M;
    vector<vector<int> > country;
    for (int i=0; i<N; i++){
        vector<int> str;
        for (int j=0; j<M; j++){
            cin >> val;
            str.push_back(val);
        }
        country.push_back(str);
    }

    for (int i=0; i<N; i++){
        for (int j=0; j<M; j++){
            cout << country[i][j] << " ";
        }
        cout << endl;
    }
}

int main(){

    int T; cin >> T;
    while(T--)
        test();
    return 0;
}
