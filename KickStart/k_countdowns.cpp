#include <bits/stdc++.h>
using namespace std;

void test(int t){
    vector<int> A;
    int val;
    int N, K; cin >> N >> K;

    for(int i=0; i<N; i++){
        cin >> val;
        A.push_back(val);
    }
    int res = 0;
    for(auto it=A.begin(); it!=A.end(); it++){
        if(*it != K)
            continue;

        int i=0;
        auto itr = it;
        for(i=1; i<K; i++){
            if(*itr != *(itr+1)+1)
                break;
            itr = itr+1;
        }

        if(i==K){
            ++res;
            it = itr;
        }
    }
    cout << "Case #" << t << ": " << res << "\n";

}

int main(){
    int T; cin >> T;
    for(int i=0; i<T; i++)
        test(i+1);
}
