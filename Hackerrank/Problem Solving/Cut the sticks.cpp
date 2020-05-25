#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, val; cin >> n;
    vector<int> ar;

    for(int i=0; i<n; i++){
        cin >> val;
        ar.push_back(val);
    }

    sort(ar.begin(), ar.end());

    int min;
    int temp;
    int count = n;
    for(int i=0; i<n; i++){
        min = ar[i];
        temp = i;
        while(ar[i+1]==ar[i])
            i++;
        cout << count << "\n";
        count = count + temp - (i+1);
    }

    return 0;
}
