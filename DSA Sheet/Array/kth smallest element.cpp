#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int k; cin >> k;
    priority_queue<int> maxH;
    for(int i=0; i<n; i++){
        int ele;
        cin >> ele;
        maxH.push(ele);
        if(maxH.size() > k) maxH.pop();
    }
    cout << maxH.top();

    return 0;
}

