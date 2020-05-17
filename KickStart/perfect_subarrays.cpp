#include <bits/stdc++.h>
using namespace std;

bool isPerfectSquare(long double v){
    long double s = sqrt(v);
    return ((s - floor(s)) == 0);
}

void test(int t){
    vector<int> A;
    int val;
    int N; cin >> N;
    int sum = 0, res = 0;

    for(int i=0 ; i<N; i++){
        cin >> val;
        A.push_back(val);
    }

    for(int i=0; i<A.size(); i++){
        sum = 0;
        for(int j=i; j<A.size(); j++){
            sum += A[j];
            if(isPerfectSquare(sum)){
                        res++;
            }
        }
    }

    cout << "Case #" << t << ": " << res << "\n";

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T; cin >> T;
    for(int i=0; i<T; i++)
        test(i+1);
}
