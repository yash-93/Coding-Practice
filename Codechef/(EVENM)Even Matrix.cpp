#include <bits/stdc++.h>
using namespace std;

void test(){
    long N; cin >> N;

    vector<vector<long> > M(N+1, vector<long>(N+1, 0));

    vector<long> odd, even;

    for(long i=1; i<=N*N; i++){
        if(i%2==0)
            even.push_back(i);
        else
            odd.push_back(i);
    }


    long counterOdd = 1, counterEven = 1;
    M[1][1] = 1;
    M[1][2] = 2;

    for(long i=1; i<N; i++)
    {
        for(long j=1; j<N; j++)
        {
            if(M[i][j]%2 == 1)
            {
                M[i+1][j+1] = odd[counterOdd++];
                if(M[i+1][j] == 0)
                    M[i+1][j] = even[counterEven++];
                else if(M[i][j+1] == 0)
                    M[i][j+1] = even[counterEven++];
            }
            else
            {
                M[i+1][j+1] = even[counterEven++];
                if(M[i+1][j] == 0)
                    M[i+1][j] = odd[counterOdd++];
                else if(M[i][j+1] == 0)
                    M[i][j+1] = odd[counterOdd++];
            }
        }
    }

    for(long i=1; i<=N; i++){
        for(long j=1; j<=N; j++){
            cout << M[i][j] << " ";
        }
        cout << endl;
    }
    cout << "\n";
}

int main(){
    int T;
    cin >> T;
    while(T--){
        test();
    }
}
