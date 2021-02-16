#include <bits/stdc++.h>
using namespace std;

#define max_size 1000005
#define ll long long

/*if(w[0] < w[1])
    cout << 0 << endl;
    else {
        if(l[0] > 1)
            cout << 1 << endl;
        else
            cout << 2 << endl;
}*/

void test(){
    int n;
    cin >> n;
    vector<int> w(n,0);
    vector<int> l(n,0);
    vector<int> positions(n,0);
    vector<int> finalPositions(n,0);
    for(int i=0; i<n; i++){
        cin >> w[i];
        positions[i] = i;
        finalPositions[i] = w[i];
    }
    for(int i=0; i<n; i++) cin >> l[i];
    int minHits = 0;
    sort(finalPositions.begin(), finalPositions.end());
    for(int i=1; i<n; i++){
        int ind = 0;
        for(int j=0; j<n; j++){
            if(w[j] == finalPositions[i]){
                ind = j;
                break;
            }
        }
        int prevInd = 0;
        for(int j=0; j<n; j++){
            if(w[j] == finalPositions[i-1]){
                prevInd = positions[j];
                break;
            }
        }
        int c = ind;
        while(c <= prevInd){
            c += l[ind];
            positions[ind] = c;
            minHits++;
        }
    }
    cout << minHits << endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin >> t;
    while(t--)
        test();
    return 0;
}
