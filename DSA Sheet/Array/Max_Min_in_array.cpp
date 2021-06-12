#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, *arr;
    cin >> n;
    arr = new int[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    int minEle = INT_MAX;
    int maxEle = INT_MIN;
    /*
    COMPaRISONS => 2*n
    for(int i=0; i<n; i++){
        cin >> arr[i];
        if(arr[i] < minEle) minEle = arr[i];
        if(arr[i] > maxEle) maxEle = arr[i];
    }
    */

    if(n == 1){
        maxEle = arr[0];
        minEle = arr[0];
    }else if(n == 2){
        maxEle = max(arr[0], arr[1]);
        minEle = min(arr[0], arr[1]);
    }else{
        int start = 0;
        if(n%2 == 0){
            maxEle = max(arr[0], arr[1]);
            minEle = min(arr[0], arr[1]);
            start = 2;
        }else{
            maxEle = arr[0];
            minEle = arr[0];
            start = 1;
        }

        for(int i=start; i<n; i += 2){
            if(arr[i] < arr[i+1]){
                minEle = min(minEle, arr[i]);
                maxEle = max(maxEle, arr[i+1]);
            }else if(arr[i] > arr[i+1]){
                minEle = min(minEle, arr[i+1]);
                maxEle = max(maxEle, arr[i]);
            }
        }
    }

    cout << minEle << " " << maxEle << endl;

    return 0;
}

