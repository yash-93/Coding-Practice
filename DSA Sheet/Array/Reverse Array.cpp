#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, *arr;
    cin >> n;
    arr = new int[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int i = 0;
    int j = n - 1;

    while(j > i){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }

    for(int i=0; i<n; i++)
        cout << arr[i];
    return 0;
}
