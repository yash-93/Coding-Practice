#include <bits/stdc++.h>
using namespace std;

int sum(int n){
    int temp = 0;
    while(n){
        temp += n%10;
        n /= 10;
    }
    return temp;
}

void test(){
    int n; cin >> n;
    vector<int> a,b;
    int val;
    for(int i=0; i<n; i++){
        cin >> val; a.push_back(val);
        cin >> val; b.push_back(val);
    }
    int scoreA = 0, scoreB = 0;

    for(int i=0; i<n; i++){
        int sumA = 0, sumB = 0;

        sumA = sum(a[i]);

        sumB = sum(b[i]);

        if(sumA > sumB)
            scoreA++;
        else if(sumB > sumA)
            scoreB++;
        else{
            scoreA++;
            scoreB++;
        }
    }

    if(scoreA>scoreB)
        cout << 0 << " ";
    else if(scoreB>scoreA)
        cout << 1 << " ";
    else
        cout << 2 << " ";

    cout << max(scoreA, scoreB) << endl;
}

int main(){
    int t;cin >> t;
    while(t--)
        test();

    return 0;
}
