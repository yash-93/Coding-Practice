#include <bits/stdc++.h>
using namespace std;

int main(){
    int x, y;
    cin >> x >> y;
    int n;
    cin >> n;

    vector<double> cp(n);
    for(int i=0; i<n; i++)
        cin >> cp[i];

    for(auto i:cp)
        cout << i << " ";

    vector<double> ma2;
    ma2.assign(n,0);

    vector<double> ma4;
    ma4.assign(n,0);

    for(int i=0; i<x; i++)
        ma2[i] = cp[i];

    for(int i=0; i<y; i++)
        ma4[i] = cp[i];

    for(int i=x; i<n; i++){
        float sum = 0;
        for(int j=i-x; j<n; j++)
            sum += ma2[j];
        ma2[i] = sum/x;
    }

    for(int i=y; i<n; i++){
        float sum = 0;
        for(int j=i-y; j<n; j++)
            sum += ma4[j];
        ma4[i] = sum/y;
    }

    /*for(auto i:ma2)
        cout << i << " ";
    cout << endl;
    for(auto i:ma4)
        cout << i << " ";*/

    int trends = 0;
    bool greater = ma2[x]>ma4[x] ? true : false;
    for(int i=x+1; i<n; i++){
        if(ma2[i] > ma4[i] && !greater){
            trends++;
            greater = !greater;
        }else if(ma2[i] < ma4[i] && greater){
            trends++;
            greater = !greater;
        }
    }

    cout << endl << trends;

    return 0;
}
