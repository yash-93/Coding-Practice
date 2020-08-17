#include <bits/stdc++.h>
using namespace std;

#define mod 1000000007

int prev_maxFreq = 0;
int prev_ele = 0;

int maxFreq = 0;
int ele = 0;

void subsequences(vector<int> arr, int index, vector<int> subarr, int n, vector<int> &res, vector<int> &freqArr)
{
    if (index == n)
    {
        res[ele] = (res[ele] + 1) % mod;
    }
    else
    {
        subsequences(arr, index + 1, subarr, n, res, freqArr);

        subarr.push_back(arr[index]);
        freqArr[arr[index]] = (freqArr[arr[index]] + 1)%mod;
        prev_maxFreq = maxFreq;
        prev_ele = ele;
        if(freqArr[arr[index]] > maxFreq){
            maxFreq = freqArr[arr[index]];
            ele = arr[index];
        }else if(freqArr[arr[index]] == maxFreq && arr[index] < ele){
            ele = arr[index];
        }

        subsequences(arr, index + 1, subarr, n, res, freqArr);
        freqArr[arr[index]] -= 1;
        maxFreq = prev_maxFreq;
        ele = prev_ele;

    }
    return;
}

void test(){
    int n; cin >> n;
    vector<int> a(n);
    vector<int> subarr;
    vector<int> res(n+1,0);
    vector<int> freqArr(n+1,0);

    for(int i=0; i<n; i++)
        cin >> a[i];

    subsequences(a, 0, subarr, n, res, freqArr);

    for(int i=1; i<=n; i++){
        cout << res[i] << " ";
    }
    prev_maxFreq = 0;
    prev_ele = 0;

    maxFreq = 0;
    ele = 0;
    cout << endl;
}

int main(){
    int t; cin >> t;
    while(t--)
        test();
    return 0;
}
