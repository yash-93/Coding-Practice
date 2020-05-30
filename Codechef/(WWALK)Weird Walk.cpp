#include <bits/stdc++.h>
using namespace std;

void test(){
    long N; cin >> N;
    long ww = 0;
    long *A, *B, *ATemp, *BTemp;
    A = new long[N];
    B = new long[N];
    ATemp = new long[N];
    BTemp = new long[N];

    for(long i=0; i<N; i++){
        cin >> A[i];
    }

    for(long i=0; i<N; i++){
        cin >> B[i];
    }

    for(long i=0; i<N; i++){
        if(i==0){
            ATemp[i] = A[i];
            BTemp[i] = B[i];
        }else{
            ATemp[i] = A[i] + ATemp[i-1];
            BTemp[i] = B[i] + BTemp[i-1];
        }
    }

    for(long i=0; i<N; i++){
        if(ATemp[i]==BTemp[i] && (i-1)==-1){
            ww += ATemp[i];
        }else if(ATemp[i]==BTemp[i] && ATemp[i-1]==BTemp[i-1]){
            ww += (ATemp[i]- ATemp[i-1]);
        }
    }

    cout << ww << endl;

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long T; cin >> T;
    while(T--)
        test();

    return 0;
}

