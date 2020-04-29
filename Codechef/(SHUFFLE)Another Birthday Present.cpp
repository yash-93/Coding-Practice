#include <bits/stdc++.h>
using namespace std;

/*bool chkSorted(int arr[], int n)
{
    if (n == 0 || n == 1)
        return true;

    for (int i = 1; i < n; i++)
        if (arr[i - 1] > arr[i])
            return false;

    return true;
}*/

bool chkSorted(long long int a[], long long int b[], long long int n){
    bool flag = true;
    for(long long int i=0; i<n; i++){
        if(a[i]!=b[i]){
            flag = false;
            break;
        }
    }
    return flag;
}

void test(){
    long long int N, K;
    cin >> N >> K;
    long long int A[N],B[N];
    for(long long int i=0; i<N; i++){
        cin >> A[i];
        B[i] = A[i];
    }

    for(long long int i=0; i<N-K; i++){
        if(A[i]>A[i+K])
            swap(A[i], A[i+K]);
    }

    sort(B, B+N);

    if(chkSorted(A, B, N))
        cout << "yes" << "\n";
    else
        cout << "no" << "\n";

}

int main(){
    int T;
    cin >> T;
    while(T--){
        test();
    }
    return 0;
}
