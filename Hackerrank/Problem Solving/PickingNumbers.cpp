#include <bits/stdc++.h>
using namespace std;

int pickingNumbers(vector<int> a) {
    sort(a.begin(), a.end());
    int siz = a.size();
    int main_len = 0, len = 0;
    for(int i=0; i<siz; i++){
        if(len>main_len)
            main_len = len;
        len = 0;
        for(int j=i+1; j<siz; j++){
            if(abs(a[i] - a[j]) > 1)
                break;
            len += 1;
        }
    }
    return main_len+1;
}

int main(){
    int n, val;
    vector<int> a;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> val;
        a.push_back(val);
    }

    cout << endl << pickingNumbers(a) << endl;
    return 0;
}
