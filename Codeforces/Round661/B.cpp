#include <bits/stdc++.h>
using namespace std;

#define mod 1000000007

void test(){
    int n; cin >> n;
    vector<int> a(n);
    vector<int> b(n);
    for(int i=0;i<n;i++)
        cin >> a[i];
    for(int i=0;i<n;i++)
        cin >> b[i];
    int a_min = *min_element(a.begin(), a.end());
    int b_min = *min_element(b.begin(), b.end());
    long long int total_moves = 0;
    for(int i=0; i<n; i++){
        if(a[i]>a_min && b[i]==b_min){
            total_moves += (a[i]-a_min)%mod;
        }
        else if(b[i]>b_min && a[i]==a_min){
            total_moves += (b[i]-b_min)%mod;
        }
        else if(b[i]>b_min && a[i]>a_min){
            if (a[i]-a_min < b[i]-b_min){
                total_moves += (a[i]-a_min)%mod;
                b[i] -= (a[i]-a_min);
                total_moves += (b[i]-b_min)%mod;
            }else if(a[i]-a_min > b[i]-b_min){
                total_moves += (b[i]-b_min)%mod;
                a[i] -= (b[i]-b_min);
                total_moves += (a[i]-a_min)%mod;
            }
            else{
                total_moves += (b[i] - b_min)%mod;
            }
        }
    }
    cout << total_moves << endl;
}

int main(){
    int t; cin >> t;
    while(t--)
        test();

    return 0;
}

