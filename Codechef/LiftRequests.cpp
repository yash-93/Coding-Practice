#include <bits/stdc++.h>
using namespace std;

void test(){
    int N, Q, f, d, temp;
    long total;
    cin >> N >> Q;
    for(int i=0; i<Q; i++){
        cin >> f >> d;
        if(i==0)
            total = f;
        if(i>0)
            total += abs(temp-f);
        total += abs(d-f);
        temp = d;
    }

    cout << total << endl;

}

int main(){
    int T;
    cin >> T;
    for(int i=0; i<T; i++)
        test();
    return 0;
}
